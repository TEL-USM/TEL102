#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    double srate = 100;
    ui->setupUi(this);
    QLineSeries *sin_series = new QLineSeries();
    for (int i=0; i<10*srate;i++){
        sin_series->append(i/srate, sin(i/srate));
    }
    sin_series->setName("seno");

    srate = 10;
    QLineSeries *cos_series = new QLineSeries();
    for (int i=0; i<10*srate;i++){
        cos_series->append(i/srate, cos(i/srate));
    }
    //cos_series->setPointsVisible();
    cos_series->setName("coseno");

    srate = 5;
    QLineSeries *sin_cos = new QLineSeries();
    for (int i=0; i<10*srate;i++){
        sin_cos->append(i/srate, cos(i/srate) + sin(i/srate));
    }
    sin_cos->setName("seno + coseno");
    sin_cos->setPointsVisible(true);

    srate = 1;
    QScatterSeries *tange = new QScatterSeries();
    for (int i=0; i<10*srate;i++){
        tange->append(i/srate, tan(i/srate));
    }
    tange->setName("tangente 1 Hz");
    tange->setPointsVisible(true);
    tange->setPointLabelsVisible();

    srate = 100;
    QLineSeries *tange2 = new QLineSeries();
    for (int i=0; i<10*srate;i++){
        tange2->append(i/srate, tan(i/srate));
    }
    tange2->setName("tangente 100 Hz");


    QChart *chart = new QChart();
    chart->addSeries(sin_series);
    chart->addSeries(cos_series);
    chart->addSeries(sin_cos);
    chart->addSeries(tange);
    chart->addSeries(tange2);
    tange2->setColor(tange->color());
    chart->createDefaultAxes();
    chart->axisY()->setRange(-2,2);
    chart->setTitle("funciones trigonometricas");
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    this->setCentralWidget(chartView);
}

MainWindow::~MainWindow()
{
    delete ui;
}

