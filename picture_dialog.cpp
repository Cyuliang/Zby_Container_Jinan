#include "picture_dialog.h"
#include "ui_picture_dialog.h"

Picture_Dialog::Picture_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Picture_Dialog)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose,true);
}

Picture_Dialog::~Picture_Dialog()
{
    delete ui;
}

void Picture_Dialog::showImgSlot(const QString &path)
{
        QPixmap *labelPix = new QPixmap();
        /* 防止图片发生偏移 */
        //QPixmap  labelPixFit;
        if(labelPix->load(path)){
            ui->label->setPixmap(*labelPix);
        }
        else {
            ui->label->setText(path);
        }
        delete labelPix;
        labelPix=nullptr;
}
