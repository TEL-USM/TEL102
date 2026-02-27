#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtCharts/QChart>
#include <QtCharts/QLineSeries>

#include "oxygencontroller.h"
#include "oxygenhistory.h"

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
    void onOxygenPercentChanged(int value);
    void onOxygenKPaChanged(int value);
    void updateChart();

private:
    Ui::MainWindow *ui;

    OxygenController m_controller;
    OxygenHistory    m_history;

    QChart      *m_chart;
    QLineSeries *m_series;

    void setupChart();
    void setupConnections();
};
#endif // MAINWINDOW_H
