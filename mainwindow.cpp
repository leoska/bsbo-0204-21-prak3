#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_connectButton_clicked()
{
    dataBaseController.makeConnection();

}

void MainWindow::on_resultButton_clicked()
{
    model.setQuery("SELECT * FROM employee;");

    if (model.lastError().isValid()) {
            qDebug() << model.lastError() << &model;
    }

    ui->tableView->setModel(&model);
    ui->tableView->show();
}

