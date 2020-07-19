/********************************************************************************
** Form generated from reading UI file 'find_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_DIALOG_H
#define UI_FIND_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Find_Dialog
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateTimeEdit *dateTimeEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Find_Dialog)
    {
        if (Find_Dialog->objectName().isEmpty())
            Find_Dialog->setObjectName(QString::fromUtf8("Find_Dialog"));
        Find_Dialog->resize(224, 257);
        gridLayout_4 = new QGridLayout(Find_Dialog);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(Find_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setCheckable(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setWrapping(false);
        dateTimeEdit->setKeyboardTracking(true);
        dateTimeEdit->setProperty("showGroupSeparator", QVariant(false));
        dateTimeEdit->setCalendarPopup(false);

        horizontalLayout->addWidget(dateTimeEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dateTimeEdit_2 = new QDateTimeEdit(groupBox);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));

        horizontalLayout_2->addWidget(dateTimeEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(Find_Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setCheckable(true);
        groupBox_3->setChecked(false);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_4->addWidget(lineEdit_2);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(Find_Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setCheckable(true);
        groupBox_2->setChecked(false);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Find_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(Find_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Find_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Find_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Find_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Find_Dialog)
    {
        Find_Dialog->setWindowTitle(QApplication::translate("Find_Dialog", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Find_Dialog", "\346\227\266\351\227\264", nullptr));
        label->setText(QApplication::translate("Find_Dialog", "\350\265\267\345\247\213\346\227\266\351\227\264", nullptr));
        dateTimeEdit->setDisplayFormat(QApplication::translate("Find_Dialog", "yyyy/MM/dd hh:mm:ss", nullptr));
        label_2->setText(QApplication::translate("Find_Dialog", "\347\273\223\346\235\237\346\227\266\351\227\264", nullptr));
        dateTimeEdit_2->setDisplayFormat(QApplication::translate("Find_Dialog", "yyyy/MM/dd hh:mm:ss", nullptr));
        groupBox_3->setTitle(QApplication::translate("Find_Dialog", "\347\256\261\345\217\267", nullptr));
        label_4->setText(QApplication::translate("Find_Dialog", "\347\256\261\345\217\267", nullptr));
        groupBox_2->setTitle(QApplication::translate("Find_Dialog", "\350\275\246\347\211\214", nullptr));
        label_3->setText(QApplication::translate("Find_Dialog", "\350\275\246\347\211\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Find_Dialog: public Ui_Find_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_DIALOG_H
