#ifndef OXYGENCONTROLLER_H
#define OXYGENCONTROLLER_H

#include <QObject>

// Controla el nivel de oxígeno de SpaceDock.
// Internamente almacena el oxígeno como porcentaje (%).

class OxygenController : public QObject {
    Q_OBJECT

public:
    explicit OxygenController(QObject *parent = nullptr);

    // Acceso a los niveles actuales
    int getOxygenPercent();   // 0-100 (%)
    int getOxygenKPa();       // 0-101 (kPa aprox.)

public slots:
    // Ajusta el nivel interno usando porcentaje (%)
    void setOxygenPercent(int value);

    // Ajusta el nivel interno usando kPa
    void setOxygenKPa(int value);

signals:
    // Se emite cada vez que cambia el nivel de oxígeno en porcentaje
    void oxygenPercentChanged(int value);

    // Se emite cada vez que cambia el nivel de oxígeno en kPa
    void oxygenKPaChanged(int value);

private:
    int m_oxygenPercent; // se almacena internamente en %
};

#endif // OXYGENCONTROLLER_H
