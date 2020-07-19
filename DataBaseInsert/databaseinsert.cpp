#include "databaseinsert.h"


DataBaseInsert::DataBaseInsert(QObject *parent)
{
    this->setParent(parent);
}

DataBaseInsert::~DataBaseInsert()
{
    //QSqlDatabase::removeDatabase(connectName);
}

void DataBaseInsert::initDataBaseSlot(const QString &connectName,const QString &user, const QString &pass, const QString &ip)
{
    /*  创建插件目录  */
    QDir dir(QCoreApplication::applicationDirPath());
    const QString pluginPath="Data";
    if(!dir.cd(pluginPath)){
        dir.mkdir(pluginPath);
        dir.cd(pluginPath);
    }

    this->connectName=QString("DataBaseInsert%1").arg(connectName);

    db=QSqlDatabase::addDatabase("QSQLITE",this->connectName);
    db.setDatabaseName(QDir::toNativeSeparators(tr("%1/%2").arg(dir.path()).arg("History.db")));
    db.setUserName(user);
    db.setPassword(pass);
    db.setHostName(ip);

    if(!db.open()){
        emit messageSignal(ZBY_LOG("ERROR"),tr("DataBaseInsert Open databse  error<errorCode=%1>").arg(db.lastError().text()));
    }
    db.close();

    /* 车牌时间戳 */
    plateTime="";

    /* 箱号时间戳 */
    containerTime="";
}

void DataBaseInsert::insertDataBaseSlot(QMap<QString, QString> data)
{
    locker.lockForWrite();

    if(db.open()){
        QSqlTableModel model(this,db);
        model.setTable(tr("Containers"));
        //model.select();
        QSqlRecord record=model.record();

        if(data.value("PlateTimer","NUL")!="NUL"){
            plateTime=data.value("PlateTimer");
            record.setValue("Channel",data.value("Channel"));
            record.setValue("Plate",data.value("Plate","NUL"));
            record.setValue("PlateTimer",data.value("PlateTimer"));
            //record.setValue("PlateImg",data.value("PlateImg"));
        }
        else if(data.value("Timer","NUL")!="NUL"){
            containerTime=data.value("Timer");
            record.setValue("Type",data.value("Type"));
            record.setValue("Timer",data.value("Timer"));
            record.setValue("Channel",data.value("Channel"));
            record.setValue("ContainerFront",data.value("ContainerFront"));
            record.setValue("CheckFront",data.value("CheckFront"));
            record.setValue("ISOFront",data.value("ISOFront"));
            record.setValue("ContainerAfter",data.value("ContainerAfter"));
            record.setValue("CheckAfter",data.value("CheckAfter"));
            record.setValue("ISOAfter",data.value("ISOAfter"));
//            record.setValue("ImgFrontNumber",data.value("ImgFrontNumber"));
//            record.setValue("ImgFrontCheck",data.value("ImgFrontCheck"));
//            record.setValue("ImgLeftFrontNumber",data.value("ImgLeftFrontNumber"));
//            record.setValue("ImgLeftFrontCheck",data.value("ImgLeftFrontCheck"));
//            record.setValue("ImgRightFrontNumber",data.value("ImgRightFrontNumber"));
//            record.setValue("ImgRightFrontCheck",data.value("ImgRightFrontCheck"));
//            record.setValue("ImgLeftAfterNumber",data.value("ImgLeftAfterNumber"));
//            record.setValue("ImgLeftAfterCheck",data.value("ImgLeftAfterCheck"));
//            record.setValue("ImgRightAfterNumber",data.value("ImgRightAfterNumber"));
//            record.setValue("ImgRightAfterCheck",data.value("ImgRightAfterCheck"));
//            record.setValue("ImgAfterNumber",data.value("ImgAfterNumber"));
//            record.setValue("ImgAfterCheck",data.value("ImgAfterCheck"));
        }
        else {
            emit messageSignal(ZBY_LOG("ERROR"),tr("Database query condition exception"));
        }

        if(!model.insertRecord(0,record)){
            emit messageSignal(ZBY_LOG("ERROR"),tr("Insert data to databse  error<errorCode=%1>").arg(model.lastError().text()));
        }
        else {
            emit messageSignal(ZBY_LOG("INFO"),tr("Insert data to databse  sucessful"));
        }
        model.submitAll();

        /*
         * 清除数据
         */
        data.clear();
        record.clear();
        model.clear();
    }
    else {
        emit messageSignal(ZBY_LOG("ERROR"),tr("Open databse  error<errorCode=%1> connanme=%2").arg(db.lastError().text()).arg(db.connectionName()));
    }
    db.close();

    locker.unlock();
}

void DataBaseInsert::updateDataBaseSlot(QMap<QString, QString> data)
{
    locker.lockForWrite();

    QString filer="";
    if(db.open()){
        QSqlTableModel model(this,db);
        model.setTable(tr("Containers"));

        if(plateTime!=""){
            filer=QString("PlateTimer='%1' AND Channel='%2'").arg(plateTime).arg(data.value("Channel").toInt());
            model.setFilter(filer);
        }
        else if (containerTime!="") {
            model.setFilter(tr("Timer='%1' AND Channel='%2'").arg(containerTime).arg(data.value("Channel").toInt()));
        }
        else {
            emit messageSignal(ZBY_LOG("ERROR"),tr("Database query condition exception"));
        }

        //model.setFilter(tr("Timer='%1' AND Channel='%2'").arg(data.value("Timer")).arg(data.value("Channel")));
        model.select();
        if(model.rowCount()==1){
            QSqlRecord record=model.record(0);

            if(plateTime!=""){
                plateTime="";
                record.setValue("Type",data.value("Type"));
                record.setValue("Timer",data.value("Timer"));
                record.setValue("Channel",data.value("Channel","NUL"));
                record.setValue("ContainerFront",data.value("ContainerFront"));
                record.setValue("CheckFront",data.value("CheckFront"));
                record.setValue("ISOFront",data.value("ISOFront"));
                record.setValue("ContainerAfter",data.value("ContainerAfter"));
                record.setValue("CheckAfter",data.value("CheckAfter"));
                record.setValue("ISOAfter",data.value("ISOAfter"));
//                record.setValue("ImgFrontNumber",data.value("ImgFrontNumber"));
//                record.setValue("ImgFrontCheck",data.value("ImgFrontCheck"));
//                record.setValue("ImgLeftFrontNumber",data.value("ImgLeftFrontNumber"));
//                record.setValue("ImgLeftFrontCheck",data.value("ImgLeftFrontCheck"));
//                record.setValue("ImgRightFrontNumber",data.value("ImgRightFrontNumber"));
//                record.setValue("ImgRightFrontCheck",data.value("ImgRightFrontCheck"));
//                record.setValue("ImgLeftAfterNumber",data.value("ImgLeftAfterNumber"));
//                record.setValue("ImgLeftAfterCheck",data.value("ImgLeftAfterCheck"));
//                record.setValue("ImgRightAfterNumber",data.value("ImgRightAfterNumber"));
//                record.setValue("ImgRightAfterCheck",data.value("ImgRightAfterCheck"));
//                record.setValue("ImgAfterNumber",data.value("ImgAfterNumber"));
//                record.setValue("ImgAfterCheck",data.value("ImgAfterCheck"));
            }
            if(containerTime!=""){
                containerTime="";
                record.setValue("Plate",data.value("Plate"));
                record.setValue("PlateTimer",data.value("PlateTimer"));
                //record.setValue("PlateImg",data.value("PlateImg"));
                record.setValue("Channel",data.value("Channel","NUL"));
            }

            if(!model.setRecord(0,record)){
                emit messageSignal(ZBY_LOG("ERROR"),tr(data.value("Channel").toInt()+" Update data to databse  error<errorCOde=%1>").arg(model.lastError().text()));
            }
            else {
                emit messageSignal(ZBY_LOG("INFO"),tr("Update data to databse  sucessful time=%1").arg(data.value("Timer")));
            }
            model.submitAll();

            record.clear();
        }
        else {
            emit messageSignal(ZBY_LOG("INFO"),tr("No record was queried, update failed  %1").arg(filer));
        }
        model.clear();
    }
    db.close();

    locker.unlock();
}
