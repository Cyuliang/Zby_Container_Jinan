#ifndef SETTING_DIALOG_H
#define SETTING_DIALOG_H

#include <QDialog>
#include <QSettings>
#include <QAbstractButton>
#include <QApplication>
#include <QFileDialog>

namespace Ui {
class Setting_Dialog;
}

class Setting_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Setting_Dialog(QWidget *parent = nullptr);
    ~Setting_Dialog();

    void saveINI();
    void readINI();

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Setting_Dialog *ui;
};

#endif // SETTING_DIALOG_H
