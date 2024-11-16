#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPieSeries>

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
    void updateInd(int prop);
    void updateRes(int prop);


private:
    Ui::Widget *ui;
    QPieSeries *pseries;
    int ind_prop, res_prop;
    void updatePlot();
};
#endif // WIDGET_H
