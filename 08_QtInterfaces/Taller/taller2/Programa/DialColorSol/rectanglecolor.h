#ifndef RECTANGLECOLOR_H
#define RECTANGLECOLOR_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QPainter>
#include <QtCore>
#include <QtGui>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <Qt>


class RectangleColor:public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    RectangleColor(int x, int y, int w, int h);

signals:

public slots:
    void changeRed(int);
    void changeGreen(int);
    void changeBlue(int);

private:
    int rojo = 0;
    int verde = 0;
    int azul = 0;
    void updateColor();
};

#endif // RECTANGLECOLOR_H
