#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "tempconverter.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

class TempHistory;


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onTempCelsiusChanged(int value);
    void onTempFahrenheitChanged(int value);

    // Slot para actualizar el gráfico cuando cambie el historial
    void updateChart();

private:
    Ui::MainWindow *ui;

    TempConverter *m_converter;   // Conversor usado
    TempHistory   *m_history;

    QChart      *m_chart;
    QLineSeries *m_series;
};

#endif // MAINWINDOW_H
