#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_2_clicked()
{
    bool ok = false;
    int sum = ui->lineSummary->text().toInt(&ok);

    if (ok) {
        sum++;
    } else {

    }

    ui->lineSummary->setText(QString::number(sum));
}

