#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    monitor = new PortMonitor(this);
    connect(ui->pushButtonConnect,SIGNAL(clicked()),monitor,SLOT(openSerialPort()));
    connect(ui->pushButtonPreferences,SIGNAL(clicked()),monitor->settings,SLOT(show()));
    connect(monitor,SIGNAL(newDataArrived(QByteArray)),this,SLOT(showData(QByteArray)));
}




MainWindow::~MainWindow()
{
    delete monitor;
    delete ui;
}

void MainWindow::showData(QByteArray data)
{
    {
        QString text("Ostatnia ramka: ");
        QString FrameStr(data.toHex());
        text.append(FrameStr);
        ui->plainTextEditLog->selectAll();
        ui->plainTextEditLog->insertPlainText(text);
    }
}
