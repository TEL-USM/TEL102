#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tConverter = new TempConverter();
    QObject::connect(ui->dial_c,&QDial::valueChanged,tConverter,&TempConverter::setTempCelsius);
    QObject::connect(ui->dial_f,&QDial::valueChanged,tConverter,&TempConverter::setTempFahrenheit);
    QObject::connect(tConverter,&TempConverter::tempCelsiusChanged,ui->dial_c,&QDial::setValue);
    QObject::connect(tConverter,&TempConverter::tempFahrenheitChanged,ui->dial_f,&QDial::setValue);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete tConverter;
}
