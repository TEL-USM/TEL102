#ifndef TEMPHISTORY_H
#define TEMPHISTORY_H

#include <QObject>
#include <vector>

// Historial de temperaturas en grados Celsius

class TempHistory : public QObject {
    Q_OBJECT

public:
    TempHistory(QObject *parent = 0);

    // Cantidad de temperaturas almacenadas
    int count();

    // Devuelve la temperatura en la posición index (0 <= index < count())
    float valueAt(int index);

public slots:
    // Slot para recibir una nueva temperatura en Celsius
    void addTemperatureCelsius(int value);

signals:
    // Se emite cada vez que el historial cambia
    void historyChanged();

    // (Opcional) Se emite con el valor recién agregado
    void temperatureAdded(float value);

private:
    std::vector<float> m_values;  // historial de temperaturas en grados Celsius
};

#endif // TEMPHISTORY_H
