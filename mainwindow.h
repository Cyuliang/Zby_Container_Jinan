#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QtNetwork/QHostAddress>
#include <QApplication>
#include <QPluginLoader>
#include <QCloseEvent>
#include <QDebug>

#include "TheLicensePlate_WTY/thelicenseplate_wty_interface.h"
#include "DataInterchange/datainterchange_interface.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() Q_DECL_OVERRIDE;

    void closeEvent(QCloseEvent* event)Q_DECL_OVERRIDE;

private:

    ///
    /// \brief InitializationParameter 初始化参数
    ///
    void InitializationParameter();

    ///
    /// \brief InitializationEquipment 初始化设备
    ///
    void InitializationEquipment();

private:
    Ui::MainWindow *ui;         

    QPixmap pix;

    ///
    /// \brief openStream 打开视频流
    ///
    bool openStream;

public slots:

    /*****************************
     * 车牌
     ******************************/
    ///
    /// \brief messageSlot 日志信息
    /// \param type 日志类型
    /// \param msg 信息体
    ///
    void messageSlot(const QString &type,const QString &msg);

    ///
    /// \brief imageFlowSlot 图片流
    /// \param img
    ///
    void imageFlowSlot(QByteArray img);

    ///
    /// \brief theVideoStreamSlot 视频流
    /// \param stream
    ///
    void theVideoStreamSlot(QByteArray arrImg);

    ///
    /// \brief resultsTheLicenseSlot 车牌结果
    /// \param plate
    ///
    void resultsTheLicenseSlot(const QString &plate,const QString &color,const QString &time,QByteArray arrImg);

    ///
    /// \brief equipmentStateSlot  设备在线状态
    /// \param state
    ///
    void equipmentStateSlot(bool state);

    /*****************************
     * 集装箱
     ******************************/
    ///
    /// \brief linkStateSlot TCP链接状态
    /// \param address 地址
    /// \param state 状态
    ///
    void linkStateSlot(const QString &address,bool state);

    ///
    /// \brief toSendDataSlot 发送数据
    /// \param data 数据体
    ///
    void toSendDataSlot(int channel_number, const QString &data);

    /*****************************
     * Action
     ******************************/

    void on_action_find_triggered();

    void on_action_video_triggered(bool checked);

    void on_action_setting_triggered();

    void on_action_snap_triggered();

    void on_action_lifting_triggered();

signals:

    /*****************************
     * 车牌
     ******************************/

    ///
    /// \brief initCameraSignal 初始化相机
    /// \param localAddr 本机地址(用户绑定网卡)
    /// \param addr 相机地址
    /// \param port 端口
    /// \param imgPath 图片地址
    /// \param channel 通道号
    ///
    void initCameraSignal(const QString &localAddr,const QString &addr, const int &port, const QString &imgPath, int imgFormat,const int &channel);

    ///
    /// \brief simulationCaptureSignal 模拟抓拍
    ///
    void simulationCaptureSignal();

    ///
    /// \brief liftingElectronicRailingSignal 抬杆/落杆
    ///
    void liftingElectronicRailingSignal(bool gate);

    ///
    /// \brief transparentTransmission485Signal 透明传输
    /// \param dmsg
    ///
    void transparentTransmission485Signal(const QString &msg);

    ///
    /// \brief openTheVideoSignal 打开视频/关闭视频
    /// \param play
    ///
    void openTheVideoSignal(bool play);

    ///
    /// \brief releaseResourcesSignal 释放动态库资源
    ///
    void releaseResourcesSignal();

    /*****************************
     * 箱号
     ******************************/

    ///
    /// \brief InitializationParameterSignal 初始化参数
    /// \param address 地址
    /// \param port 端口
    /// \param serviceType 服务类型
    /// \param heartBeat 心跳包 状态
    /// \param serviceMode 服务模式
    ///
    void  InitializationParameterSignal(const QString& address,const quint16& port,const int& serviceType,const int& serviceMode);

//    ///
//    /// \brief toSendDataSignal 发送数据
//    /// \param data 数据体
//    ///
//    void toSendDataSignal(int channel_number, const QString &data);
};

#endif // MAINWINDOW_H
