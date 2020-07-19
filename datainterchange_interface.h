#ifndef DATAINTERCHANGE_INTERFACE_H
#define DATAINTERCHANGE_INTERFACE_H

#define ZBY_LOG(type)  tr("[%1][%2][%3]").arg(type).arg(Q_FUNC_INFO).arg(__LINE__)

#include <QObject>

class DataInterchange_Interface : public QObject
{
    Q_OBJECT

public:
    virtual ~ DataInterchange_Interface(){}

signals:

    ///
    /// \brief messageSignal 日志信息
    /// \param type 日志类型
    /// \param msg 信息体
    ///
    void messageSignal(const QString &type,const QString &msg);

    ///
    /// \brief linkStateSingal TCP链接状态
    /// \param address 地址
    /// \param state 状态
    ///
    void linkStateSingal(const QString &address,bool state);

    ///
    /// \brief connectCountSignal 链接数量
    /// \param count
    ///
    void connectCountSignal(int count);

    ///
    /// \brief toSendDataSignal 发送识别结果
    /// \param channel 通道号
    /// \param result 识别结果
    ///
    void toSendDataSignal(int channel_number,const QString& result);

    ///
    /// \brief setHeartbeatPackStateSignal 设置心跳包状态
    /// \param state
    ///
    void setHeartbeatPackStateSignal(bool state);

public slots:

    ///
    /// \brief InitializationParameterSlot 初始化参数
    /// \param address 地址
    /// \param port 端口
    /// \param serviceType 服务类型
    /// \param heartBeat 心跳包 状态
    /// \param serviceMode 服务模式
    ///
    virtual void  InitializationParameterSlot(const QString &address,const quint16 &port,const int &serviceType,const int &serviceMode)=0;

    ///
    /// \brief toSendDataSlot 发送数据
    /// \param data 数据体
    ///
    virtual void toSendDataSlot(int channel_number, const QString &data)=0;

    ///
    /// \brief releaseResourcesSlot 释放资源
    ///
    virtual void releaseResourcesSlot()=0;

};

#define DataInterchange_InterfaceIID "ZBY.ContainerServer.DataInterchange_Interface/1.0"
Q_DECLARE_INTERFACE(DataInterchange_Interface,DataInterchange_InterfaceIID);

#endif // DATAINTERCHANGE_INTERFACE_H
