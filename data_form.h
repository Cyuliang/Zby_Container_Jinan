#ifndef DATA_FORM_H
#define DATA_FORM_H

#include <QWidget>
#include <QSqlTableModel>
#include <QDebug>

#include "image_dialog.h"

namespace Ui {
class data_Form;
}

class data_Form : public QWidget
{
    Q_OBJECT

public:
    explicit data_Form(QWidget *parent = nullptr);
    ~data_Form();

private:
    Ui::data_Form *ui;

    //-------------------------------------------------------------- 字段枚举
    enum{
        ID=0,
        Timer=1,
        Channel=2,
        Type=3,
        ContainerFront=4,
        CheckFront=5,
        ISOFront=6,
        ContainerAfter=7,
        CheckAfter=8,
        ISOAfter=9,
        ImgFront=10,
        ImgFrontCheck=11,
        ImgFrontNumber=12,
        ImgLeftFront=13,
        ImgLeftFrontCheck=14,
        ImgLeftFrontNumber=15,
        ImgRightFront=16,
        ImgRightFrontCheck=17,
        ImgRightFrontNumber=18,
        ImgLeftAfter=19,
        ImgLeftAfterCheck=20,
        ImgLeftAfterNumber=21,
        ImgRightAfter=22,
        ImgRightAfterCheck=23,
        ImgRightAfterNumber=24,
        ImgAfter=25,
        ImgAfterCheck=26,
        ImgAfterNumber=27,
        Plate=28,
        PlateTimer=29,
        PlateImg=30
    };

    int channel;
    int format;
    QString container_image_path;
    QString plate_image_path;

public slots:

    ///
    /// \brief returnModelSlot 查询数据模型
    /// \param model
    ///
    void returnModelSlot(QSqlTableModel *model);

    ///
    /// \brief setImagePathSlot 设置图片查询路径
    /// \param format
    /// \param channel
    /// \param container_path
    /// \param plate_path
    ///
    void setImagePathSlot(int format,int channel,QString container_path,QString plate_path);

private slots:

    ///
    /// \brief on_tableView_clicked 查看图片
    /// \param index
    ///
    void on_tableView_clicked(const QModelIndex &index);

signals:

    ///
    /// \brief setImagePathSignal 设置图片查询路径
    /// \param format
    /// \param channel
    /// \param container_path
    /// \param plate_path
    ///
    void setImagePathSignal(int format,int channel,QString container_path,QString plate_path,const QModelIndex &index);

};

#endif // DATA_FORM_H
