/********************************************************************************
** Form generated from reading UI file 'data_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_FORM_H
#define UI_DATA_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_data_Form
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QWidget *data_Form)
    {
        if (data_Form->objectName().isEmpty())
            data_Form->setObjectName(QString::fromUtf8("data_Form"));
        data_Form->resize(768, 576);
        data_Form->setMinimumSize(QSize(768, 576));
        data_Form->setMaximumSize(QSize(768, 576));
        gridLayout = new QGridLayout(data_Form);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(data_Form);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMaximumSize(QSize(16777215, 16777215));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->verticalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        retranslateUi(data_Form);

        QMetaObject::connectSlotsByName(data_Form);
    } // setupUi

    void retranslateUi(QWidget *data_Form)
    {
        data_Form->setWindowTitle(QApplication::translate("data_Form", "\346\225\260\346\215\256\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class data_Form: public Ui_data_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_FORM_H
