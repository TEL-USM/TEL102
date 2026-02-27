#ifndef TEMPHISTORY_H
#define TEMPHISTORY_H

#include <QObject>
#include <vector>

// Historial de temperaturas en grados Celsius

class TempHistory : public QObject {
    Q_OBJECT

public:
    TempHistory(QObject *parent = 0);

    // COMPLETAR

private:
    std::vector<float> m_values;  // historial de temperaturas en grados Celsius
};

#endif // TEMPHISTORY_H
