#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InitializationParameter()
{

    QDir pluginsDir(QCoreApplication::applicationDirPath());

    for(QString file:pluginsDir.entryList(QDir::Files)){
        QPluginLoader loader(pluginsDir.absoluteFilePath(file));
        QObject *plugin=loader.instance();

        if (TheLicensePlate_WTY_Interface* pLicensePlateInterface=qobject_cast<TheLicensePlate_WTY_Interface*>(plugin)) {
            /* 初始化相机 */
            connect(this,&MainWindow::initCameraSignal,pLicensePlateInterface,&TheLicensePlate_WTY_Interface::initCameraSlot);
            /* 模拟抓拍 */
            connect(this,&MainWindow::simulationCaptureSignal,pLicensePlateInterface,&TheLicensePlate_WTY_Interface::simulationCaptureSlot);
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
            connect(this,&MainWindow::toSendDataSignal,pSocketServerInterface,&DataInterchange_Interface::toSendDataSlot);
            /* 日志信息 */
            connect(pSocketServerInterface,&DataInterchange_Interface::messageSignal,this,&MainWindow::messageSlot);
            /* 释放资源 */
            connect(this,&MainWindow::releaseResourcesSignal,pSocketServerInterface,&DataInterchange_Interface::releaseResourcesSlot);
            /* 接收数据 */
            connect(pSocketServerInterface,&DataInterchange_Interface::receiveDataSignal,this,&MainWindow::receiveDataSlot);
            /* 链接状态 */
            connect(pSocketServerInterface,&DataInterchange_Interface::linkStateSingal,this,&MainWindow::linkStateSlot);
        }
        else {
            delete plugin;
        }
    }
}

void MainWindow::messageSlot(const QString &type, const QString &msg)
{

}

void MainWindow::imageFlowSlot(QByteArray img)
{

}

void MainWindow::theVideoStreamSlot(QByteArray arrImg)
{

}

void MainWindow::resultsTheLicenseSlot(const QString &plate, const QString &color, const QString &time, QByteArray arrImg)
{

}

void MainWindow::equipmentStateSlot(bool state)
{

}

void MainWindow::linkStateSlot(const QString &address, bool state)
{

}

void MainWindow::receiveDataSlot(const QString &data)
{
}
