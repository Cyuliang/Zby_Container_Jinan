#ifndef PICTURE_DIALOG_H
#define PICTURE_DIALOG_H

#include <QDialog>
#include <QPixmap>

namespace Ui {
class Picture_Dialog;
}

class Picture_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Picture_Dialog(QWidget *parent = nullptr);
    ~Picture_Dialog();

private:
    Ui::Picture_Dialog *ui;

public slots:

    ///
    /// \brief showImgSignal 放大图片
    /// \param path
    ///
    void showImgSlot(const QString &path);
};

#endif // PICTURE_DIALOG_H
