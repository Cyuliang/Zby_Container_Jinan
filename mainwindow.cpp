#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    openStream=false;
    channel=0;
    InState=false;
    format=0;
    nameFormat=0;

    plateTime="";
    containerTime="";

    readINI();

    InitializationParameter();    
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    emit releaseResourcesSignal();
}

void MainWindow::InitializationParameter()
{
    QDir pluginsDir(QCoreApplication::applicationDirPath());
    pluginsDir.cd("Plugins");

    for(QString file:pluginsDir.entryList(QDir::Files)){
        QPluginLoader loader(pluginsDir.absoluteFilePath(file));
        QObject *plugin=loader.instance();

        if (TheLicensePlate_WTY_Interface* pLicensePlateInterface=qobject_cast<TheLicensePlate_WTY_Interface*>(plugin)) {
            /* 初始化相机 */
            connect(this,&MainWindow::initCameraSignal,pLicensePlateInterface,&TheLicensePlate_WTY_Interface::initCameraSlot);
            /* 模拟抓拍 */
            connect(this,&MainWindow::simulationCaptureSignal,pLicensePlateInterface,&TheLicensePlate_WTY_Interface::simulationCaptureSlot);
            /* 手动抬杆 */
            connect(this,&MainWindow::liftingElectronicRailingSignal,pLicensePlateInterface,&TheLicensePlate_WTY_Interface::liftingElectronicRailingSlot);
            /* 识别结果 */
            connect(pLicensePlateInterface,&TheLicensePlate_WTY_Interface::resultsTheLicensePlateSignal,this,&MainWindow::resultsTheLicenseSlot);
            /* 图片流 */
            connect(pLicensePlateInterface,&TheLicensePlate_WTY_Interface::imageFlowSignal,this,&MainWindow::imageFlowSlot);
            /* 打开关闭车牌视频 */
            connect(this,&MainWindow::openTheVideoSignal,pLicensePlateInterface,&TheLicensePlate_WTY_Interface::openTheVideoSlot);
            /* 视频流 */
            connect(pLicensePlateInterface,&TheLicensePlate_WTY_Interface::theVideoStreamSignal,this,&MainWindow::theVideoStreamSlot);
            /* 相机状态 */
            connect(pLicensePlateInterface,&TheLicensePlate_WTY_Interface::equipmentStateSignal,this,&MainWindow::equipmentStateSlot);
            /* 日志信息 */
            connect(pLicensePlateInterface,&TheLicensePlate_WTY_Interface::messageSignal,this,&MainWindow::messageSlot);
            /* 释放资源 */
            connect(this,&MainWindow::releaseResourcesSignal,pLicensePlateInterface,&TheLicensePlate_WTY_Interface::releaseResourcesSlot);
        }
        else if(DataInterchange_Interface* pSocketServerInterface=qobject_cast<DataInterchange_Interface*>(plugin)) {
            /* 初始化参数 */
            connect(this,&MainWindow::InitializationParameterSignal,pSocketServerInterface,&DataInterchange_Interface::InitializationParameterSlot);
            /* 发送数据 */
            connect(pSocketServerInterface,&DataInterchange_Interface::toSendDataSignal,this,&MainWindow::toSendDataSlot);
            /* 日志信息 */
            connect(pSocketServerInterface,&DataInterchange_Interface::messageSignal,this,&MainWindow::messageSlot);
            /* 释放资源 */
            connect(this,&MainWindow::releaseResourcesSignal,pSocketServerInterface,&DataInterchange_Interface::releaseResourcesSlot);
            /* 链接状态 */
            connect(pSocketServerInterface,&DataInterchange_Interface::linkStateSingal,this,&MainWindow::linkStateSlot);
        }
        else if(DataBaseInsertInterface* pDataBaseInsertInterface=qobject_cast<DataBaseInsertInterface*>(plugin)){
            /* 日志信息 */
            connect(pDataBaseInsertInterface,&DataBaseInsertInterface::messageSignal,this,&MainWindow::messageSlot);
            /* 初始化数据库 */
            connect(this,&MainWindow::initDataBaseSignal,pDataBaseInsertInterface,&DataBaseInsertInterface::initDataBaseSlot);
            /* 插入数据库 */
            connect(this,&MainWindow::insertDataBaseSignal,pDataBaseInsertInterface,&DataBaseInsertInterface::insertDataBaseSlot);
            /* 更新数据库 */
            connect(this,&MainWindow::updateDataBaseSignal,pDataBaseInsertInterface,&DataBaseInsertInterface::updateDataBaseSlot);

        }
        else if (DataBaseReadInterface* pDataBaseReadInterface=qobject_cast<DataBaseReadInterface*>(plugin)) {
            /* 日志信息 */
            connect(pDataBaseReadInterface,&DataBaseReadInterface::messageSignal,this,&MainWindow::messageSlot);
            /* 初始化数据库 */
            connect(this,&MainWindow::initDataBaseSignal,pDataBaseReadInterface,&DataBaseReadInterface::initDataBaseSlot);
            /* 查询数据 */
            connect(this,&MainWindow::setDataBaseFilterSignal,pDataBaseReadInterface,&DataBaseReadInterface::setDataBaseFilterSlot);
            /* 返回数据模型到数据库界面 */
            connect(pDataBaseReadInterface,&DataBaseReadInterface::returnModelSingal,this,&MainWindow::returnModelSlot);
//            /* 查询数据绑定到数据库处理逻辑(信号与信号绑定) */
//            connect(pDataBaseWidget,&DataBaseWidget::setDataBaseFilterSignal,pDataBaseProcessing,&DataBaseProcessing::setDataBaseFilterSignal);
            /* 统计数据到界面 */
            connect(pDataBaseReadInterface,&DataBaseReadInterface::statisticalDataSignal,this,&MainWindow::statisticalDataSlot);
//            /* 设置数据库图片查询路径 */
//            connect(pDataBaseProcessing,&DataBaseProcessing::seFindtImgPathSlgnal,pDataBaseWidget,&DataBaseWidget::seFindtImgPathSlot);
        }
        else {
            delete plugin;
            messageSlot("ERROR",loader.errorString());
        }
    }
    InitializationEquipment();
}

void MainWindow::readINI()
{
    QSettings setting(QString("%1/config.ini").arg(QApplication::applicationDirPath()),QSettings::IniFormat);

    setting.beginGroup("Plate");
    plate_Local_ip = setting.value("Local_ip","127.0.0.1").toString();
    plate_Camera_ip = setting.value("Camera_ip","192.168.0.98").toString();
    plate_imgPath = setting.value("imgPath","./images").toString();
    setting.endGroup();

    setting.beginGroup("Container");
    container_Server_ip = setting.value("Server_ip","127.0.0.1").toString();
    container_Server_port = setting.value("Server_port",5000).toInt();
    container_imgPath = setting.value("imgPath","./images").toString();
    setting.endGroup();

    setting.beginGroup("System");
    channel=setting.value("Channel",1).toInt();
    format = setting.value("Format",0).toInt();
    nameFormat=setting.value("NameFormat",0).toInt();
    setting.endGroup();
}

void MainWindow::InitializationEquipment()
{    
    emit InitializationParameterSignal(container_Server_ip,static_cast<quint16>(container_Server_port),0,0);
    emit initCameraSignal(plate_Local_ip,plate_Camera_ip,9100,plate_imgPath,format,channel);
    emit initDataBaseSignal(QString::number(channel),"admin","Zby123456","localhost");
}

void MainWindow::messageSlot(const QString &type, const QString &msg)
{
    if(ui->textEdit->document()->lineCount()>300){
        ui->textEdit->clear();
    }
//    if(type=="ERROR"){
//        ui->textEdit->setTextColor(Qt::red);
//    }
//    else if(type=="INFO"){
//        ui->textEdit->setTextColor(Qt::blue);
//    }
    ui->textEdit->append(QString("\n%1").arg(msg));
}

void MainWindow::imageFlowSlot(QByteArray img)
{
    QPixmap pix;
    pix.loadFromData(img);
    ui->label_4->setPixmap(pix);
}

void MainWindow::theVideoStreamSlot(QByteArray arrImg)
{    
    if(openStream){        
        QPixmap pix;
        pix.loadFromData(arrImg);
        ui->label_4->setPixmap(pix);
    }
    arrImg.clear();
}

void MainWindow::resultsTheLicenseSlot(const QString &plate, const QString &color, const QString &time, QByteArray arrImg)
{    
    ui->lineEdit->setText(plate);
    ui->lineEdit_2->setText(time);
    ui->lineEdit_3->setText(color);

    dataMap["Channel"]=QString::number(channel);
    dataMap["Plate"]=plate;
    dataMap["PlateTimer"]=QDateTime::fromString(time,"yyyy-M-d h:m:s").toString("yyyy-MM-dd hh:mm:ss");

    if(containerTime==""){
        emit insertDataBaseSignal(dataMap);

        this->plateTime=time;
        //InState=true;
    }
    else {
        emit updateDataBaseSignal(dataMap);

        this->plateTime="";
        //InState=false;
    }

    containerTime="";
    dataMap.clear();
}

void MainWindow::equipmentStateSlot(bool state)
{
    if(state){
        ui->label_6->setStyleSheet("background-color: rgb(0, 255, 0);");
    }
    else {
        ui->label_6->setStyleSheet("background-color: rgb(255, 0, 0);");
    }
}

void MainWindow::linkStateSlot(const QString &address, bool state)
{
    if(state){
        ui->label_5->setStyleSheet("background-color: rgb(0, 255, 0);");
    }
    else {
        ui->label_5->setStyleSheet("background-color: rgb(255, 0, 0);");
    }
}

void MainWindow::toSendDataSlot(int channel_number, const QString &data)
{
    //ui->textEdit->setTextColor(Qt::green);

    ui->textEdit->append(data);
    QStringList list=data.split('[');
    if(list.count()>0){
        for (int ind=0;ind<list.count();ind++) {
            if(list[ind].indexOf("[C")){
                QStringList data=list[ind].split('|');
                if(data.count()>3){
                    dataMap["Timer"]=QDateTime::fromString(data[1],"yyyyMMddhhmmss").toString("yyyy-MM-dd hh:mm:ss");
                    dataMap["Channel"]=QString::number(channel);
                }
                if(data.count()==10){   /* 双箱 */
                    dataMap["Type"]=data[3];
                    dataMap["ContainerFront"]=data[4];
                    dataMap["ISOFront"]=data[8];
                    dataMap["CheckFront"]=(data[5]=="Y"?1:0);
                    dataMap["ContainerAfter"]=data[6];
                    dataMap["ISOAfter"]=data[9];
                    dataMap["CheckAfter"]=(data[7]=="Y"?1:0);
                }
                else if (data.count()==7) {/* 单箱 */
                    dataMap["Type"]=data[3];
                    dataMap["ContainerFront"]=data[4];
                    dataMap["ISOFront"]=data[6];
                    dataMap["CheckFront"]=(data[5]=="Y"?1:0);
                }
            }
        }

        if(dataMap.count()>0){
            if(plateTime==""){
                emit insertDataBaseSignal(dataMap);

                this->containerTime=dataMap["Timer"];
                //InState=true;
            }
            else {
                emit updateDataBaseSignal(dataMap);

                this->containerTime="";
                //InState=false;
            }

            plateTime="";
        }

    }
    dataMap.clear();
}

void MainWindow::on_action_find_triggered()
{
    data_Form *dataF=new data_Form();

    connect(this,&MainWindow::setImagePathSignal,dataF,&data_Form::setImagePathSlot);/* 设置图片查询路径 */
    connect(this,&MainWindow::returnModelSignal,dataF,&data_Form::returnModelSlot);/* 设置数据查询模 */

    Find_Dialog* dlg=new Find_Dialog(this);
    connect(dlg,&Find_Dialog::setFilerSignal,this,&MainWindow::setDataBaseFilterSignal);

    if(dlg->exec()==QDialog::Accepted){
        emit setImagePathSignal(0,channel,container_imgPath,plate_imgPath);
        dataF->show();
    }

    dlg=nullptr;
}

void MainWindow::on_action_video_triggered(bool checked)
{
    if(checked){
        openStream=true;
        emit openTheVideoSignal(true);
    }
    else {
        openStream=false;
        emit openTheVideoSignal(false);
    }
}

void MainWindow::on_action_setting_triggered()
{
    Setting_Dialog* dlg=new Setting_Dialog(this);
    if(dlg->exec()==QDialog::Accepted){
        QMessageBox::about(this,"save config.ini","参数保存，重启生效");
    }
    else {
        QMessageBox::warning(this,"save config.ini","参数没有保存");
    }

    dlg=nullptr;
}

void MainWindow::on_action_snap_triggered()
{
    emit simulationCaptureSignal();
}

void MainWindow::on_action_lifting_triggered()
{
    emit liftingElectronicRailingSignal(true);/* 抬杆(false落杆) */
}

void MainWindow::returnModelSlot(QSqlTableModel *model)
{
    emit returnModelSignal(model);
}

void MainWindow::statisticalDataSlot(int total, double correct, double error, double statistical)
{

}
