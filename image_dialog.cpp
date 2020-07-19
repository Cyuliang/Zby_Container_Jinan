#include "image_dialog.h"
#include "ui_image_dialog.h"

Image_Dialog::Image_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Image_Dialog)
{
    ui->setupUi(this);

    ui->label->installEventFilter(this);
    ui->label_2->installEventFilter(this);
    ui->label_3->installEventFilter(this);
    ui->label_4->installEventFilter(this);
    ui->label_5->installEventFilter(this);
    ui->label_6->installEventFilter(this);

    this->setAttribute(Qt::WA_DeleteOnClose,true);
}

Image_Dialog::~Image_Dialog()
{
    delete ui;
}

bool Image_Dialog::eventFilter(QObject *obj, QEvent *event)
{
    if (QLabel* pLabel=qobject_cast<QLabel*> (obj))
    {
        if (event->type() == QEvent::MouseButtonPress)//mouse button pressed
        {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
            if(mouseEvent->button() == Qt::LeftButton)
            {
                Picture_Dialog *picDlg=new Picture_Dialog(this);

                connect(this,&Image_Dialog::showImgSignal,picDlg,&Picture_Dialog::showImgSlot);

                emit showImgSignal(pLabel->toolTip());

                picDlg->exec();
                picDlg=nullptr;

                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        // pass the event on to the parent class
        return Image_Dialog::eventFilter(obj, event);
    }
}

void Image_Dialog::setImagePathSlot(int format, int channel, QString container_path, QString plate_path, const QModelIndex &index)
{

    QSettings setting(QString("%1/config.ini").arg(QApplication::applicationDirPath()),QSettings::IniFormat);
    setting.beginGroup("System");
    int nameFormat=setting.value("NameFormat",1).toInt();
    setting.endGroup();

    if(container_path!=""){
        QDir dir(container_path);
        QString suffixPath="";
        bool isRoot=false;/* 如果是保存在根目录就不用CD */
        QStringList date=index.sibling(index.row(),Timer).data().toString().split(" ");
        int land=index.sibling(index.row(),Channel).data().toInt();

        if(date.count()==2){
            QStringList tmpList=date[0].split("-");
            switch (format) {
            case 0:
                suffixPath=QDir::toNativeSeparators(tr("%1/%2").arg(QString::number(land)).arg(tmpList.join("/")));
                break;
            case 1:
                suffixPath=QDir::toNativeSeparators(tr("%1/%2").arg(QString::number(land)).arg(tmpList[0].append("/").append(tmpList[1])));
                break;
            case 2:
                suffixPath=QDir::toNativeSeparators(tr("%1/%2").arg(QString::number(land)).arg(tmpList[0]));
                break;
            case 3:
                suffixPath=QDir::toNativeSeparators(tr("%1").arg(land));
                break;
            case 4:
                suffixPath=QDir::toNativeSeparators(tr("%1").arg(tmpList.join("/")));
                break;
            case 5:
                suffixPath=QDir::toNativeSeparators(tr("%1").arg(tmpList[0].append("/").append(tmpList[1])));
                break;
            case 6:
                suffixPath=QDir::toNativeSeparators(tr("%1").arg(tmpList[0]));
                break;
            case 7:
                isRoot=true;
                break;
            }
        }

        if(!isRoot){
            dir.cd(suffixPath);
        }

        QPixmap *labelPix = new QPixmap();
        /* 防止图片发生偏移 */
        QPixmap  labelPixFit;

        /* 车牌 */
        QDir platePh(plate_path);
        if(!isRoot){
            platePh.cd(suffixPath);
        }

        int num=7;
        int ch=channel;
//        if(nameFormat==0){
//            ch=7;
//            num=channel;
//        }

        /* 车牌 */
        QString imgTmp=index.sibling(index.row(),/*ImgFront*/ PlateTimer).data().toString();
        if(imgTmp!=""){
            if(labelPix->load(QDir::toNativeSeparators(tr("%1/%2%3%4").arg(platePh.path()).arg(QDateTime::fromString(imgTmp,"yyyy-MM-dd hh:mm:ss").toString("yyyyMMddhhmmss")).arg(num).arg(ch)))){
                //labelPixFit=labelPix->scaled(ui->label_3->width(),ui->label_3->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
                ui->label_3->setToolTip(QDir::toNativeSeparators(tr("%1/%2%3%4").arg(platePh.path()).arg(QDateTime::fromString(imgTmp,"yyyy-MM-dd hh:mm:ss").toString("yyyyMMddhhmmss")).arg(num).arg(ch)));
                ui->label_3->setPixmap(*labelPix);
            }
        }


        num=3;
        ch=channel;
        if(nameFormat==0){
            ch=3;
            num=channel;
        }
        imgTmp=index.sibling(index.row(),Timer).data().toString();
        if(imgTmp!=""){
            if(labelPix->load(QDir::toNativeSeparators(tr("%1/%2%3%4").arg(dir.path()).arg(QDateTime::fromString(imgTmp,"yyyy-MM-dd hh:mm:ss").toString("yyyyMMddhhmmss")).arg(num).arg(ch)))){
                //labelPixFit=labelPix->scaled(ui->label->width(),ui->label->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
                ui->label->setToolTip(QDir::toNativeSeparators(tr("%1/%2%3%4").arg(dir.path()).arg(QDateTime::fromString(imgTmp,"yyyy-MM-dd hh:mm:ss").toString("yyyyMMddhhmmss")).arg(num).arg(ch)));
                ui->label->setPixmap(*labelPix);
            }
        }

        num=2;
        ch=channel;
        if(nameFormat==0){
            ch=2;
            num=channel;
        }
        imgTmp=index.sibling(index.row(),Timer).data().toString();
        if(imgTmp!=""){
            if(labelPix->load(QDir::toNativeSeparators(tr("%1/%2%3%4").arg(dir.path()).arg(QDateTime::fromString(imgTmp,"yyyy-MM-dd hh:mm:ss").toString("yyyyMMddhhmmss")).arg(num).arg(ch)))){
                //labelPixFit=labelPix->scaled(ui->label_6->width(),ui->label_6->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
                ui->label_6->setToolTip(QDir::toNativeSeparators(tr("%1/%2%3%4").arg(dir.path()).arg(QDateTime::fromString(imgTmp,"yyyy-MM-dd hh:mm:ss").toString("yyyyMMddhhmmss")).arg(num).arg(ch)));
                ui->label_6->setPixmap(*labelPix);

            }
        }

        num=5;
        ch=channel;
        if(nameFormat==0){
            ch=5;
            num=channel;
        }
        imgTmp=index.sibling(index.row(),Timer).data().toString();
        if(imgTmp!=""){
            if(labelPix->load(QDir::toNativeSeparators(tr("%1/%2%3%4").arg(dir.path()).arg(QDateTime::fromString(imgTmp,"yyyy-MM-dd hh:mm:ss").toString("yyyyMMddhhmmss")).arg(num).arg(ch)))){
                //labelPixFit=labelPix->scaled(ui->label_2->width(),ui->label_2->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
                ui->label_2->setToolTip(QDir::toNativeSeparators(tr("%1/%2%3%4").arg(dir.path()).arg(QDateTime::fromString(imgTmp,"yyyy-MM-dd hh:mm:ss").toString("yyyyMMddhhmmss")).arg(num).arg(ch)));
                ui->label_2->setPixmap(*labelPix);

            }
        }

        num=4;
        ch=channel;
        if(nameFormat==0){
            ch=4;
            num=channel;
        }
        imgTmp=index.sibling(index.row(),Timer).data().toString();
        if(imgTmp!=""){
            if(labelPix->load(QDir::toNativeSeparators(tr("%1/%2%3%4").arg(dir.path()).arg(QDateTime::fromString(imgTmp,"yyyy-MM-dd hh:mm:ss").toString("yyyyMMddhhmmss")).arg(num).arg(ch)))){
                //labelPixFit=labelPix->scaled(ui->label_5->width(),ui->label_5->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
                ui->label_5->setToolTip(QDir::toNativeSeparators(tr("%1/%2%3%4").arg(dir.path()).arg(QDateTime::fromString(imgTmp,"yyyy-MM-dd hh:mm:ss").toString("yyyyMMddhhmmss")).arg(num).arg(ch)));
                ui->label_5->setPixmap(*labelPix);
            }
        }

        num=6;
        ch=channel;
        if(nameFormat==0){
            ch=6;
            num=channel;
        }
        imgTmp=index.sibling(index.row(),Timer).data().toString();
        if(imgTmp!=""){
            if(labelPix->load(QDir::toNativeSeparators(tr("%1/%2%3%4").arg(dir.path()).arg(QDateTime::fromString(imgTmp,"yyyy-MM-dd hh:mm:ss").toString("yyyyMMddhhmmss")).arg(num).arg(ch)))){
                //labelPixFit=labelPix->scaled(ui->label_4->width(),ui->label_4->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
                ui->label_4->setToolTip(QDir::toNativeSeparators(tr("%1/%2%3%4").arg(dir.path()).arg(QDateTime::fromString(imgTmp,"yyyy-MM-dd hh:mm:ss").toString("yyyyMMddhhmmss")).arg(num).arg(ch)));
                ui->label_4->setPixmap(*labelPix);
            }
        }

//        imgTmp=index.sibling(index.row(),PlateImg).data().toString();
//        if(imgTmp!=""){
//            if(labelPix->load(QDir::toNativeSeparators(tr("%1/%2").arg(dir.path()).arg(imgTmp)))){
//                labelPixFit=labelPix->scaled(ui->Img_plate_label->width(),ui->Img_plate_label->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
//                ui->Img_plate_label->setPixmap(labelPixFit);
//            }
//        }

        date.clear();
        delete labelPix;
        labelPix=nullptr;
    }
}
