#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::readyRead,this,&MainWindow::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_connect_clicked()
{
    socket->connectToHost("127.0.0.1", 2323);
}

void MainWindow::SendToServer(QString str)
{
    Data.clear();
    QDataStream out (&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_2);
    out << str;
    socket->write(Data);
    ui->listWidget->addItem(str);
    ui ->lineEdit->clear();
}


void MainWindow::slotReadyRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_2);
    if (in.status() == QDataStream::Ok){
        QString str;
        in << str;
        ui->listWidget->addItem(str);
    }else{
        ui->listWidget->addItem("read error");
    }
}
// Вставить
void MainWindow::on_Paste_clicked()
{
    QListWidgetItem *it = ui->listWidget->item(ui->listWidget->currentRow());
    if (it != 0){
        QString past_com = ui->listWidget->currentItem()->text();
        ui->lineEdit->setText(past_com);
        ui->listWidget->currentItem()->setForeground(Qt::blue);
    }
    else{
        QMessageBox::critical(this, "Error", "Row not selected");
    }
}


void MainWindow::on_Save_clicked() // Сохранить
{

    QString command = ui->lineEdit->text();
    if (command != ""){
        ui ->listWidget->addItem(command);
        ui ->lineEdit->clear();
    }
    else{
        QMessageBox::critical(this, "Error", "Commands field is empty");
    }
}


void MainWindow::on_Remove_clicked() // Удалить
{
    QListWidgetItem *it = ui->listWidget->item(ui->listWidget->currentRow());
    if (it != 0){
        delete it;
    }else{
        QMessageBox::critical(this, "Error", "Row not selected");
    }
}


void MainWindow::on_Run_clicked() // Отправить
{
    QString com = ui->lineEdit->text();
    if (com != ""){
        SendToServer(com);
    }
}
void MainWindow::on_lineEdit_returnPressed() // Отправить через enter
{
    QString com = ui->lineEdit->text();
    if (com != ""){
        SendToServer(com);
    }
}


