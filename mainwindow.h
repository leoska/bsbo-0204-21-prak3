#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <DataBaseController.h>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_resultButton_clicked();

    void on_connectButton_clicked();

private:
    Ui::MainWindow *ui;
    DataBaseController dataBaseController;
    QSqlQueryModel model;
};
#endif // MAINWINDOW_H
