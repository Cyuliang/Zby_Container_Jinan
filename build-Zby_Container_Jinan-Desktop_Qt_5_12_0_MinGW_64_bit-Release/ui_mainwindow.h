/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_find;
    QAction *action_video;
    QAction *action_setting;
    QAction *action_snap;
    QAction *action_lifting;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(768, 576);
        MainWindow->setMinimumSize(QSize(768, 576));
        MainWindow->setMaximumSize(QSize(768, 576));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/ICO.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_find = new QAction(MainWindow);
        action_find->setObjectName(QString::fromUtf8("action_find"));
        action_video = new QAction(MainWindow);
        action_video->setObjectName(QString::fromUtf8("action_video"));
        action_video->setCheckable(true);
        action_setting = new QAction(MainWindow);
        action_setting->setObjectName(QString::fromUtf8("action_setting"));
        action_snap = new QAction(MainWindow);
        action_snap->setObjectName(QString::fromUtf8("action_snap"));
        action_lifting = new QAction(MainWindow);
        action_lifting->setObjectName(QString::fromUtf8("action_lifting"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFrameShape(QFrame::Box);
        label_4->setScaledContents(true);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 2, 2);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 2, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 3, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(200, 0));
        textEdit->setMaximumSize(QSize(200, 16777215));
        textEdit->setReadOnly(true);

        gridLayout_2->addWidget(textEdit, 1, 2, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_3);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 2, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_find);
        toolBar->addAction(action_video);
        toolBar->addAction(action_snap);
        toolBar->addAction(action_lifting);
        toolBar->addAction(action_setting);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\267\261\345\234\263\344\274\227\347\231\276\346\272\220\347\247\221\346\212\200\345\211\215\347\253\257\346\216\247\345\210\266(\347\202\271\345\210\233)", nullptr));
        action_find->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        action_video->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221", nullptr));
        action_setting->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        action_snap->setText(QApplication::translate("MainWindow", "\346\212\223\346\213\215", nullptr));
        action_lifting->setText(QApplication::translate("MainWindow", "\346\212\254\346\235\206", nullptr));
        groupBox->setTitle(QString());
        label_4->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\347\256\261\345\217\267", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\350\275\246\347\211\214", nullptr));
        label->setText(QApplication::translate("MainWindow", "\350\275\246\347\211\214:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
