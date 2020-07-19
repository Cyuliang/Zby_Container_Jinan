#include "setting_dialog.h"
#include "ui_setting_dialog.h"

Setting_Dialog::Setting_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting_Dialog)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose,true);

    readINI();
}

Setting_Dialog::~Setting_Dialog()
{
    delete ui;
}

void Setting_Dialog::saveINI()
{
    QSettings setting(QString("%1/config.ini").arg(QApplication::applicationDirPath()),QSettings::IniFormat);

    setting.beginGroup("Plate");
    setting.setValue("Local_ip",ui->lineEdit->text());
    setting.setValue("Camera_ip",ui->lineEdit_4->text());
    setting.setValue("imgPath",ui->lineEdit_2->text());
    setting.endGroup();

    setting.beginGroup("Container");
    setting.setValue("Server_ip",ui->lineEdit_3->text());
    setting.setValue("Server_port",ui->lineEdit_5->text());
    setting.setValue("imgPath",ui->lineEdit_6->text());
    setting.endGroup();

    setting.beginGroup("System");
    setting.setValue("Channel",ui->spinBox->value());
    setting.setValue("Format",ui->ImageFormat_1->currentIndex());
    setting.setValue("NameFormat",ui->comboBox->currentIndex());
    setting.endGroup();
}

void Setting_Dialog::readINI()
{
    QSettings setting(QString("%1/config.ini").arg(QApplication::applicationDirPath()),QSettings::IniFormat);

    setting.beginGroup("Plate");
    ui->lineEdit->setText(setting.value("Local_ip","127.0.0.1").toString());
    ui->lineEdit_4->setText(setting.value("Camera_ip","192.168.0.98").toString());
    ui->lineEdit_2->setText(setting.value("imgPath","./images").toString());
    setting.endGroup();

    setting.beginGroup("Container");
    ui->lineEdit_3->setText(setting.value("Server_ip","127.0.0.1").toString());
    ui->lineEdit_5->setText(setting.value("Server_port",5000).toString());
    ui->lineEdit_6->setText(setting.value("imgPath","./images").toString());
    setting.endGroup();

    setting.beginGroup("System");
    ui->spinBox->setValue(setting.value("Channel",1).toInt());
    ui->ImageFormat_1->setCurrentIndex(setting.value("Format",0).toInt());
    ui->comboBox->setCurrentIndex(setting.value("NameFormat",0).toInt());
    setting.endGroup();
}

void Setting_Dialog::on_buttonBox_clicked(QAbstractButton *button)
{
    if(button==ui->buttonBox->button(QDialogButtonBox::Save)){
        saveINI();
    }
}

void Setting_Dialog::on_pushButton_clicked()
{
    QString fileName =QFileDialog::getExistingDirectory(this,"Choose the path",QApplication::applicationDirPath());
    ui->lineEdit_2->setText(fileName);
}

void Setting_Dialog::on_pushButton_2_clicked()
{
    QString fileName =QFileDialog::getExistingDirectory(this,"Choose the path",QApplication::applicationDirPath());
    ui->lineEdit_6->setText(fileName);
}
