#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "tempconverter.h"
#include "temphistory.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_converter(nullptr)
    , m_history(nullptr)
    , m_chart(nullptr)
    , m_series(nullptr)
{
    ui->setupUi(this);

    // Crear lógica
    m_converter = new TempConverter(this);
    m_history   = new TempHistory(this);

    // Crear el gráfico
    m_series = new QLineSeries(this);
    m_chart  = new QChart();
    m_chart->addSeries(m_series);
    m_chart->setTitle("Historial de temperaturas (°C)");
    m_chart->createDefaultAxes();

    // Ajustar ejes explícitamente
    m_chart->axisX()->setRange(0, 9);
    m_chart->axisY()->setRange(-273, 100);

    ui->graphicsView->setChart(m_chart);

    // Conexión: diales → TempConverter
    QObject::connect(ui->dialCelsius, &QDial::valueChanged,
                     m_converter,     &TempConverter::setTempCelsius);

    QObject::connect(ui->dialFahrenheit, &QDial::valueChanged,
                     m_converter,        &TempConverter::setTempFahrenheit);

    // Conexión: TempConverter → MainWindow
    QObject::connect(m_converter, &TempConverter::tempCelsiusChanged,
                     this,        &MainWindow::onTempCelsiusChanged);

    QObject::connect(m_converter, &TempConverter::tempFahrenheitChanged,
                     this,        &MainWindow::onTempFahrenheitChanged);

    // COMPLETAR CON CONEXIONES SIGNALS Y SLOTS FALTANTES


    // Inicializar según el valor inicial del dial
    m_converter->setTempCelsius(ui->dialCelsius->value());
}


void MainWindow::onTempCelsiusChanged(int value)
{
    ui->lcdCelsius->display(value);
}

void MainWindow::onTempFahrenheitChanged(int value)
{
    ui->lcdFahrenheit->display(value);
}


void MainWindow::updateChart()
{
    // COMPLETAR
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_converter;
}


