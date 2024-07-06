#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <QWidget>
#include<QSqlTableModel>
#include<QMessageBox>
namespace Ui {
class Administrator;
}

class Administrator : public QWidget
{
    Q_OBJECT

public:
    explicit Administrator(QWidget *parent = nullptr);
    ~Administrator();

private slots:
    void on_search_id_clicked();

    void on_delete_selected_row_clicked();

    void on_pushButton_clicked();

    void on_modify_clicked();

    void on_search_id2_clicked();

    void on_addnew_2_clicked();

    void on_delete_selected_row_2_clicked();

    void on_modify_2_clicked();

private:
    Ui::Administrator *ui;
       QSqlTableModel*model;
       QSqlTableModel*model2;
};

#endif // ADMINISTRATOR_H
