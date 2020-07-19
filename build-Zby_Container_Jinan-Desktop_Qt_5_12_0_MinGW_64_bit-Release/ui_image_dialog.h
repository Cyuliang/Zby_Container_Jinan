/********************************************************************************
** Form generated from reading UI file 'image_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_DIALOG_H
#define UI_IMAGE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Image_Dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_5;

    void setupUi(QDialog *Image_Dialog)
    {
        if (Image_Dialog->objectName().isEmpty())
            Image_Dialog->setObjectName(QString::fromUtf8("Image_Dialog"));
        Image_Dialog->resize(1160, 582);
        gridLayout = new QGridLayout(Image_Dialog);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        label_3 = new QLabel(Image_Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(384, 288));
        label_3->setMaximumSize(QSize(384, 288));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setScaledContents(true);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_4 = new QLabel(Image_Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(384, 288));
        label_4->setMaximumSize(QSize(384, 288));
        label_4->setFrameShape(QFrame::Panel);
        label_4->setScaledContents(true);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_6 = new QLabel(Image_Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(384, 288));
        label_6->setMaximumSize(QSize(384, 288));
        label_6->setFrameShape(QFrame::Panel);
        label_6->setScaledContents(true);

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        label_2 = new QLabel(Image_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(384, 288));
        label_2->setMaximumSize(QSize(384, 288));
        label_2->setFrameShape(QFrame::Panel);
        label_2->setScaledContents(true);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(Image_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(384, 288));
        label->setMaximumSize(QSize(384, 288));
        label->setFrameShape(QFrame::Panel);
        label->setScaledContents(true);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_5 = new QLabel(Image_Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(384, 288));
        label_5->setMaximumSize(QSize(384, 288));
        label_5->setFrameShape(QFrame::Panel);
        label_5->setScaledContents(true);

        gridLayout->addWidget(label_5, 1, 1, 1, 1);


        retranslateUi(Image_Dialog);

        QMetaObject::connectSlotsByName(Image_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Image_Dialog)
    {
        Image_Dialog->setWindowTitle(QApplication::translate("Image_Dialog", "\346\225\260\346\215\256\345\233\276\347\211\207", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_2->setText(QString());
        label->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Image_Dialog: public Ui_Image_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_DIALOG_H
