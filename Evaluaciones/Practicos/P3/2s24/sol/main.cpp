#include <iostream>
#include <vector>
#include "consultageneral.h"
#include "consultaespecializada.h"
#include "funciones.h"

int main() {
    std::vector<Consulta*> consultas;  // Vector para almacenar las consultas
    int opcion;

    do {
        // Menú principal
        std::cout << std::endl << "Sistema de Gestión de Consultas Médicas" << std::endl;
        std::cout << "1. Registrar una nueva consulta" << std::endl;
        std::cout << "2. Listar consultas registradas" << std::endl;
        std::cout << "3. Confirmar/Cancelar consulta" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore();  // Limpiar el buffer de entrada

        switch (opcion) {
            case 1: {
                int tipoConsulta;
                std::cout << "Seleccione el tipo de consulta:" << std::endl;
                std::cout << "1. Consulta General" << std::endl;
                std::cout << "2. Consulta Especializada" << std::endl;
                std::cout << "Tipo: ";
                std::cin >> tipoConsulta;
                std::cin.ignore();

                std::string nombrePaciente, especialidad, fecha;
                std::cout << "Ingrese nombre del paciente: ";
                std::getline(std::cin, nombrePaciente);
                std::cout << "Ingrese especialidad médica: ";
                std::getline(std::cin, especialidad);
                std::cout << "Ingrese fecha de la consulta: ";
                std::getline(std::cin, fecha);

                if (tipoConsulta == 1) {
                    std::string nombreMedico;
                    std::cout << "Ingrese nombre del médico: ";
                    std::getline(std::cin, nombreMedico);

                    Consulta* nuevaConsulta = new ConsultaGeneral(nombrePaciente, especialidad, fecha, nombreMedico);
                    agregarConsulta(consultas, nuevaConsulta);

                } else if (tipoConsulta == 2) {
                    float costoAdicional;
                    std::cout << "Ingrese costo adicional: $";
                    std::cin >> costoAdicional;
                    std::cin.ignore();

                    Consulta* nuevaConsulta = new ConsultaEspecializada(nombrePaciente, especialidad, fecha, costoAdicional);
                    agregarConsulta(consultas, nuevaConsulta);

                } else {
                    std::cout << "Tipo de consulta no válido." << std::endl;
                }
                break;
            }
            case 2:
                listarConsultas(consultas);
                break;

            case 3: {
                int indice;
                std::cout << "Ingrese el índice de la consulta a gestionar: ";
                std::cin >> indice;
                gestionarConsulta(consultas, indice - 1);  // Ajustar índice para el vector
                break;
            }

            case 4:
                std::cout << "Saliendo del sistema..." << std::endl;
                break;

            default:
                std::cout << "Opción no válida. Intente nuevamente." << std::endl;
                break;
        }
    } while (opcion != 4);

    // Liberar memoria antes de salir
    liberarMemoria(consultas);
    return 0;
}
