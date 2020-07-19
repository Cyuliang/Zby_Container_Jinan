#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QtNetwork/QHostAddress>
#include <QApplication>
#include <QPluginLoader>
#include <QCloseEvent>
#include <QDebug>
#include <QPixmap>
#include <QMessageBox>
#include <QSettings>
#include <QSqlTableModel>
#include <QDateTime>

#include "thelicenseplate_wty_interface.h"
#include "datainterchange_interface.h"
#include "databaseinsertinterface.h"
#include "databasereadinterface.h"
#include "setting_dialog.h"
#include "data_form.h"
#include "find_dialog.h"

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

    void readINI();

private:
    Ui::MainWindow *ui;


    QString plateTime;
    QString containerTime;

    ///
    /// \brief openStream 打开视频流
    ///
    bool openStream;

    QString plate_Local_ip;
    QString plate_Camera_ip;
    QString plate_imgPath;
    QString container_Server_ip;
    int container_Server_port;
    QString container_imgPath;
    int channel;/* 和箱号一致 */
    int format;
    int nameFormat;

    ///
    /// \brief InState 数据插入状态
    ///
    bool InState;

    ///
    /// \brief dataMap 数据库插入对象
    ///
    QMap<QString,QString> dataMap;

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

    /*****************************
     * 数据库读取
     ******************************/

    ///
    /// \brief returnModelSlot 返回数据模型
    /// \param model 数据模型
    ///
    void returnModelSlot( QSqlTableModel *model);

    ///
    /// \brief statisticalDataSlot
    /// \param total 总计
    /// \param correct 正确
    /// \param error 错误
    /// \param statistical 统计
    ///
    void statisticalDataSlot(int total,double correct,double error,double statistical);

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

    /*****************************
     * 数据库插入
     ******************************/

    ///
    /// \brief initDataBaseSignal 初始化数据库.如果不存在,就创建.
    /// \param connectName 链接名称
    /// \param user 用户名
    /// \param pass密码
    /// \param ip 地址
    ///
    void initDataBaseSignal(const QString &connectName,const QString &user,const QString &pass,const QString &ip);

    ///
    /// \brief insertDataBaseSignal 插入数据库
    /// \param data 数据字典
    ///
    void insertDataBaseSignal(QMap<QString, QString> data);

    ///
    /// \brief updateDataBaseSignal 更新数据
    /// \param data 数据字典
    ///
    void updateDataBaseSignal(QMap<QString, QString> data);

    /*****************************
     * 数据库读取
     ******************************/

    ///
    /// \brief setDataBaseFilterSignal 设置数据库筛选条件
    /// \param filter 筛选条件
    ///
    void setDataBaseFilterSignal(const QString &filter);

    ///
    /// \brief returnModelSignal 设置数据模型
    /// \param model
    ///
    void returnModelSignal(QSqlTableModel *model);

    ///
    /// \brief setImagePathSignal 设置图片查询路径
    /// \param format
    /// \param channel
    /// \param container_path
    /// \param plate_path
    ///
    void setImagePathSignal(int format,int channel,QString container_path,QString plate_path);
};

#endif // MAINWINDOW_H
