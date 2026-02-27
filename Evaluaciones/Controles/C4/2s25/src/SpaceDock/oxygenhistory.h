#ifndef OXYGENHISTORY_H
#define OXYGENHISTORY_H

#include <QObject>
#include <vector>

// Historial de niveles de oxígeno en porcentaje (%)

class OxygenHistory : public QObject {
    Q_OBJECT

public:
    OxygenHistory(QObject *parent = nullptr);

    // COMPLETAR

private:
    std::vector<float> m_values;  // historial en %
    static const int MAX_VALUES = 12;
};

#endif // OXYGENHISTORY_H
