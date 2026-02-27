#ifndef OXYGENHISTORY_H
#define OXYGENHISTORY_H

#include <QObject>
#include <vector>

// Historial de niveles de oxígeno en porcentaje (%)

class OxygenHistory : public QObject {
    Q_OBJECT

public:
    explicit OxygenHistory(QObject *parent = nullptr);

    // Agrega una nueva medición de oxígeno (en %).
    // Solo se guardan las 12 últimas.
    void addValue(float value);

    // Cantidad actual de mediciones almacenadas.
    int count();

    // Retorna la medición en la posición 'index'.
    // Se asume 0 <= index < count().
    float valueAt(int index);

signals:
    // Se emite cada vez que cambia el historial
    // (por ejemplo, al agregar una nueva medición).
    void historyChanged();

public slots:
    // Slot para recibir el oxígeno en porcentaje
    // directamente desde OxygenController.
    void onOxygenPercentChanged(int value);

private:
    std::vector<float> m_values;  // historial en %
    static const int MAX_VALUES = 12;
};

#endif // OXYGENHISTORY_H
