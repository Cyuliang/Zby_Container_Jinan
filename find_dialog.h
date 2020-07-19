#ifndef FIND_DIALOG_H
#define FIND_DIALOG_H

#include <QDialog>
#include <QAbstractButton>
#include <QPushButton>

namespace Ui {
class Find_Dialog;
}

class Find_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Find_Dialog(QWidget *parent = nullptr);
    ~Find_Dialog();

private:
    Ui::Find_Dialog *ui;

signals:

    ///
    /// \brief setFilerSignal 设置筛选条件
    /// \param file
    ///
    void setFilerSignal(const QString &file);

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);
};

#endif // FIND_DIALOG_H
