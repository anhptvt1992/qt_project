#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QMessageBox>
#include <QtSerialPort/QSerialPort>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->port_comboBox->
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_connect_button_clicked()
{
    QMessageBox qmsgbox;
    qmsgbox.setText("HELLO");
    qmsgbox.exec();
}
