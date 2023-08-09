#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// Se agrega la clase MainWindow actual al namespace Ui
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// Clase que contiene definiciones de la ventana principal
// Hereda de QMainWindow
class MainWindow : public QMainWindow
{
    // Macro que convierte la clase en un QObject
    Q_OBJECT

public:
    // Constructor de ventana principal
    // Una ventana, puede estar asociada a otra ventana/dialog/widget. Si existe
    // esa asociación, *parent != nullptr
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    // Puntero que se hará apuntar a la interfaz gráfica definida en mainwindow.ui
    // Definición de esta clase se encuentra en el archivo "ui_mainwindow.h"
    // (generado automáticamente)
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
