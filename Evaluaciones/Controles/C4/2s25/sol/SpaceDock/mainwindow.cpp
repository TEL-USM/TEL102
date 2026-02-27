#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_chart(new QChart())
    , m_series(new QLineSeries())
{
    ui->setupUi(this);

    setupChart();
    setupConnections();

    // Inicializar displays con el valor actual del controlador
    int initialPercent = m_controller.getOxygenPercent();
    int initialKPa     = m_controller.getOxygenKPa();

    ui->lcdPercent->display(initialPercent);
    ui->lcdKpa->display(initialKPa);

    // Ajustar diales (si no están configurados en el .ui)
    ui->dialPercent->setRange(0, 100);
    ui->dialKpa->setRange(0, 101);

    ui->dialPercent->setValue(initialPercent);
    ui->dialKpa->setValue(initialKPa);
}


void MainWindow::setupChart()
{
    m_chart->addSeries(m_series);
    m_chart->createDefaultAxes();
    m_chart->setTitle("Historial de oxígeno (%)");

    ui->graphicsView->setChart(m_chart);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

    m_chart->axisX()->setRange(0, 11);
    m_chart->axisY()->setRange(-1, 101);
}

void MainWindow::setupConnections()
{
    // Diales -> OxygenController
    connect(ui->dialPercent, &QDial::valueChanged,
            &m_controller, &OxygenController::setOxygenPercent);

    connect(ui->dialKpa, &QDial::valueChanged,
            &m_controller, &OxygenController::setOxygenKPa);

    // OxygenController -> MainWindow (para actualizar LCDs y diales)
    connect(&m_controller, &OxygenController::oxygenPercentChanged,
            this, &MainWindow::onOxygenPercentChanged);

    connect(&m_controller, &OxygenController::oxygenKPaChanged,
            this, &MainWindow::onOxygenKPaChanged);

    // OxygenController -> OxygenHistory
    connect(&m_controller, &OxygenController::oxygenPercentChanged,
            &m_history, &OxygenHistory::onOxygenPercentChanged);

    // OxygenHistory -> MainWindow (actualización del gráfico)
    connect(&m_history, &OxygenHistory::historyChanged,
            this, &MainWindow::updateChart);
}

void MainWindow::onOxygenPercentChanged(int value)
{
    // Actualizar display
    ui->lcdPercent->display(value);

    // Sincronizar dialPercent sin generar ciclos de señales
    ui->dialPercent->blockSignals(true);
    ui->dialPercent->setValue(value);
    ui->dialPercent->blockSignals(false);
}

void MainWindow::onOxygenKPaChanged(int value)
{
    // Actualizar display
    ui->lcdKpa->display(value);

    // Sincronizar dialKpa sin generar ciclos de señales
    ui->dialKpa->blockSignals(true);
    ui->dialKpa->setValue(value);
    ui->dialKpa->blockSignals(false);
}

void MainWindow::updateChart()
{
    m_series->clear();

    int n = m_history.count();
    for (int i = 0; i < n; ++i) {
        float value = m_history.valueAt(i);
        m_series->append(i, value);
    }

    m_chart->axisY()->setRange(-1, 101);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_chart;
    delete m_series;
}
