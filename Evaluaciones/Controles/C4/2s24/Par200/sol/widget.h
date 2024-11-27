#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QBarSeries>
#include <QBarSet>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void updateEnero(int value);
    void updateFebrero(int value);
    void updateMarzo(int value);


private:
    Ui::Widget *ui;
    QBarSeries *bseries;
    QBarSet *bset;
    int stock_enero, stock_febrero, stock_marzo;
    void updatePlot();
};
#endif // WIDGET_H
