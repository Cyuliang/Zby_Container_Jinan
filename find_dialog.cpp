#include "find_dialog.h"
#include "ui_find_dialog.h"

Find_Dialog::Find_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Find_Dialog)
{
    ui->setupUi(this);

    ui->dateTimeEdit->setDate(QDate::currentDate());
    ui->dateTimeEdit->setTime(QTime(0,0,0));

    ui->dateTimeEdit_2->setDate(QDate::currentDate());
    ui->dateTimeEdit_2->setTime(QTime(23,59,59));

    this->setAttribute(Qt::WA_DeleteOnClose,true);
}

Find_Dialog::~Find_Dialog()
{
    delete ui;
}

void Find_Dialog::on_buttonBox_clicked(QAbstractButton *button)
{
    if(button==ui->buttonBox->button(QDialogButtonBox::Ok)){
        QStringList filterList;

        if(ui->groupBox->isChecked()){
            filterList.append(tr("(Timer>='%1' AND Timer<='%2')").arg(ui->dateTimeEdit->dateTime().toString("yyyy-MM-dd HH:mm:ss")).arg(ui->dateTimeEdit_2->dateTime().toString("yyyy-MM-dd HH:mm:ss")));
        }
        if(ui->groupBox_3->isChecked()){
            if(ui->lineEdit_2->text()!=""){
                filterList.append(tr("ContainerFront='%1' OR ContainerAfter='%1'").arg(ui->lineEdit_2->text()));
            }
        }
        if(ui->groupBox_2->isChecked()){
            if(ui->lineEdit->text()!=""){
                filterList.append(tr("Plate='%1'").arg(ui->lineEdit->text()));
            }
        }
        emit setFilerSignal(filterList.join(" AND "));
        accept();
    }
}
