/********************************************************************************
** Form generated from reading UI file 'setting_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_DIALOG_H
#define UI_SETTING_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Setting_Dialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *ImageFormat_1;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *comboBox;
    QLabel *label_9;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Setting_Dialog)
    {
        if (Setting_Dialog->objectName().isEmpty())
            Setting_Dialog->setObjectName(QString::fromUtf8("Setting_Dialog"));
        Setting_Dialog->resize(482, 405);
        gridLayout_3 = new QGridLayout(Setting_Dialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(Setting_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(215, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_3->addWidget(lineEdit_4);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 3);

        groupBox_2 = new QGroupBox(Setting_Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_4->addWidget(lineEdit_3);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_5->addWidget(lineEdit_5);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_6->addWidget(lineEdit_6);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_6->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout_6, 2, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(Setting_Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        spinBox = new QSpinBox(Setting_Dialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_7->addWidget(spinBox);


        gridLayout_3->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(367, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 2, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        ImageFormat_1 = new QComboBox(Setting_Dialog);
        ImageFormat_1->addItem(QString());
        ImageFormat_1->addItem(QString());
        ImageFormat_1->addItem(QString());
        ImageFormat_1->addItem(QString());
        ImageFormat_1->addItem(QString());
        ImageFormat_1->addItem(QString());
        ImageFormat_1->addItem(QString());
        ImageFormat_1->addItem(QString());
        ImageFormat_1->setObjectName(QString::fromUtf8("ImageFormat_1"));
        ImageFormat_1->setEditable(false);

        horizontalLayout_8->addWidget(ImageFormat_1);

        label_8 = new QLabel(Setting_Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);


        gridLayout_3->addLayout(horizontalLayout_8, 3, 0, 1, 2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        comboBox = new QComboBox(Setting_Dialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_9->addWidget(comboBox);

        label_9 = new QLabel(Setting_Dialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);


        gridLayout_3->addLayout(horizontalLayout_9, 4, 0, 1, 2);

        buttonBox = new QDialogButtonBox(Setting_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout_3->addWidget(buttonBox, 5, 2, 1, 1);


        retranslateUi(Setting_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Setting_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Setting_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Setting_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Setting_Dialog)
    {
        Setting_Dialog->setWindowTitle(QApplication::translate("Setting_Dialog", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Setting_Dialog", "\350\275\246\347\211\214", nullptr));
        label->setText(QApplication::translate("Setting_Dialog", "\346\234\254\346\234\272\345\234\260\345\235\200", nullptr));
        lineEdit->setInputMask(QApplication::translate("Setting_Dialog", "###.###.###.###", nullptr));
        label_4->setText(QApplication::translate("Setting_Dialog", "\347\233\270\346\234\272\345\234\260\345\235\200", nullptr));
        lineEdit_4->setInputMask(QApplication::translate("Setting_Dialog", "###.###.###.###", nullptr));
        label_2->setText(QApplication::translate("Setting_Dialog", "\345\233\276\347\211\207\344\277\235\345\255\230\350\267\257\345\276\204", nullptr));
        pushButton->setText(QApplication::translate("Setting_Dialog", "\351\200\211\346\213\251", nullptr));
        groupBox_2->setTitle(QApplication::translate("Setting_Dialog", "\347\256\261\345\217\267", nullptr));
        label_3->setText(QApplication::translate("Setting_Dialog", "\347\256\261\345\217\267\345\234\260\345\235\200", nullptr));
        lineEdit_3->setInputMask(QApplication::translate("Setting_Dialog", "###.###.###.###", nullptr));
        label_5->setText(QApplication::translate("Setting_Dialog", "\347\253\257\345\217\243\345\217\267  ", nullptr));
        label_6->setText(QApplication::translate("Setting_Dialog", "\345\233\276\347\211\207\344\277\235\345\255\230\350\267\257\345\276\204", nullptr));
        pushButton_2->setText(QApplication::translate("Setting_Dialog", "\351\200\211\346\213\251", nullptr));
        label_7->setText(QApplication::translate("Setting_Dialog", "\351\200\232\351\201\223\345\217\267", nullptr));
#ifndef QT_NO_STATUSTIP
        spinBox->setStatusTip(QApplication::translate("Setting_Dialog", "\345\277\205\351\241\273\345\222\214\347\256\261\345\217\267\350\256\276\347\275\256\347\232\204\351\200\232\351\201\223\345\217\267\344\270\200\350\207\264", nullptr));
#endif // QT_NO_STATUSTIP
        ImageFormat_1->setItemText(0, QApplication::translate("Setting_Dialog", "CHANNEL/YYYY/MM/DD/", nullptr));
        ImageFormat_1->setItemText(1, QApplication::translate("Setting_Dialog", "CHANNEL/YYYY/MM/", nullptr));
        ImageFormat_1->setItemText(2, QApplication::translate("Setting_Dialog", "CHANNEL/YYYY/", nullptr));
        ImageFormat_1->setItemText(3, QApplication::translate("Setting_Dialog", "CHANNEL/", nullptr));
        ImageFormat_1->setItemText(4, QApplication::translate("Setting_Dialog", "YYYY/MM/DD/", nullptr));
        ImageFormat_1->setItemText(5, QApplication::translate("Setting_Dialog", "YYYY/MM/", nullptr));
        ImageFormat_1->setItemText(6, QApplication::translate("Setting_Dialog", "YYYY/", nullptr));
        ImageFormat_1->setItemText(7, QApplication::translate("Setting_Dialog", "/", nullptr));

        label_8->setText(QApplication::translate("Setting_Dialog", "\350\267\257\345\276\204\345\215\217\350\256\256", nullptr));
        comboBox->setItemText(0, QApplication::translate("Setting_Dialog", "Channel/Number", nullptr));
        comboBox->setItemText(1, QApplication::translate("Setting_Dialog", "Number/Channel", nullptr));

        label_9->setText(QApplication::translate("Setting_Dialog", "\345\233\276\347\211\207\345\215\217\350\256\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting_Dialog: public Ui_Setting_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_DIALOG_H
