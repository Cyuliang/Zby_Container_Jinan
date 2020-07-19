/********************************************************************************
** Form generated from reading UI file 'picture_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURE_DIALOG_H
#define UI_PICTURE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Picture_Dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QDialog *Picture_Dialog)
    {
        if (Picture_Dialog->objectName().isEmpty())
            Picture_Dialog->setObjectName(QString::fromUtf8("Picture_Dialog"));
        Picture_Dialog->resize(400, 300);
        gridLayout = new QGridLayout(Picture_Dialog);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(Picture_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(Picture_Dialog);

        QMetaObject::connectSlotsByName(Picture_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Picture_Dialog)
    {
        Picture_Dialog->setWindowTitle(QApplication::translate("Picture_Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Picture_Dialog", "11111111111", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Picture_Dialog: public Ui_Picture_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURE_DIALOG_H
