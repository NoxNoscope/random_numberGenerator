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


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    QString ss = QString::fromStdString("GENERATE ") + QString::number(value+1) + QString::fromStdString(" RESULTS");
    ui->GENERATE100->setText(ss);
}

void MainWindow::on_GENERATE100_clicked()
{
    for (int var = 0; var < ui->horizontalSlider->value()+1; ++var) {
        QString s = QString::number(rand() % 37);
        ui->listWidget->insertItem(0, s);
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString s = QString::number(rand() % 37);
    ui->listWidget->insertItem(0, s);
}
