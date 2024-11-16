#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPieSeries>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

// Complete el código de la clase según lo solicitado
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    // Completar con slots solicitados

private:
    Ui::Widget *ui;
    // Completar con atributos y métodos privados solicitados
};
#endif // WIDGET_H
