#include "data_form.h"
#include "ui_data_form.h"

data_Form::data_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::data_Form)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose,true);
}

data_Form::~data_Form()
{
    delete ui;
}

void data_Form::returnModelSlot(QSqlTableModel *model)
{
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(ID,true);
    ui->tableView->setColumnHidden(ImgFront,true);
    ui->tableView->setColumnHidden(ImgFrontCheck,true);
    ui->tableView->setColumnHidden(ImgFrontNumber,true);
    ui->tableView->setColumnHidden(ImgLeftFront,true);
    ui->tableView->setColumnHidden(ImgLeftFrontCheck,true);
    ui->tableView->setColumnHidden(ImgLeftFrontNumber,true);
    ui->tableView->setColumnHidden(ImgRightFront,true);
    ui->tableView->setColumnHidden(ImgRightFrontCheck,true);
    ui->tableView->setColumnHidden(ImgRightFrontNumber,true);
    ui->tableView->setColumnHidden(ImgLeftAfter,true);
    ui->tableView->setColumnHidden(ImgLeftAfterCheck,true);
    ui->tableView->setColumnHidden(ImgLeftAfterNumber,true);
    ui->tableView->setColumnHidden(ImgRightAfter,true);
    ui->tableView->setColumnHidden(ImgRightAfterCheck,true);
    ui->tableView->setColumnHidden(ImgRightAfterNumber,true);
    ui->tableView->setColumnHidden(ImgAfter,true);
    ui->tableView->setColumnHidden(ImgAfterCheck,true);
    ui->tableView->setColumnHidden(ImgAfterNumber,true);
    ui->tableView->setColumnHidden(PlateImg,true);
}

void data_Form::setImagePathSlot(int format, int channel, QString container_path, QString plate_path)
{
    this->channel=channel;
    this->format=format;
    this->container_image_path=container_path;
    this->plate_image_path=plate_path;
}

void data_Form::on_tableView_clicked(const QModelIndex &index)
{
    Image_Dialog *imageDlg=new Image_Dialog(this);
    connect(this,&data_Form::setImagePathSignal,imageDlg,&Image_Dialog::setImagePathSlot);
    emit setImagePathSignal(format,channel,container_image_path,plate_image_path,index);
    imageDlg->exec();
}
