#ifndef IMAGE_DIALOG_H
#define IMAGE_DIALOG_H

#include <QDialog>
#include <QDir>
#include <QModelIndex>
#include <QDebug>
#include <QDateTime>
#include <QMouseEvent>
#include <QEvent>
#include <QSettings>

#include "picture_dialog.h"

namespace Ui {
class Image_Dialog;
}

class Image_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Image_Dialog(QWidget *parent = nullptr);
    ~Image_Dialog()Q_DECL_OVERRIDE;

    bool eventFilter(QObject *obj, QEvent *event)Q_DECL_OVERRIDE;

signals:

    ///
    /// \brief showImgSignal 放大图片
    /// \param path
    ///
    void showImgSignal(const QString &path);

private:
    Ui::Image_Dialog *ui;

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

public slots:

    ///
    /// \brief setImagePathSlot 设置图片查询路径
    /// \param format
    /// \param channel
    /// \param container_path
    /// \param plate_path
    ///
    void setImagePathSlot(int format,int channel,QString container_path,QString plate_path,const QModelIndex &index);

};

#endif // IMAGE_DIALOG_H
