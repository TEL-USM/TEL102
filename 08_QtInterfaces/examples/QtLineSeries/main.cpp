#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // series es el tipo de gráfico que utilizaremos
    QLineSeries *series = new QLineSeries();
    series->append(0, 6);
    series->append(2, 4);
    series->append(3, 8);
    series->append(7, 4);
    series->append(10, 5);
    *series << QPointF(11, 1) << QPointF(13, 3)
    << QPointF(17, 6) << QPointF(18, 3)
    << QPointF(20, 2);


    // chart es el grágico en sí
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Simple line chart example");

    // chartview es el equivalente al sector donde
    // dibujaremos nuestro gráfico
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // window sería el equivalente a la hoja de papel
    MainWindow window;
    window.setCentralWidget(chartView);
    window.show();
    return a.exec();
}
