#include <iostream>

struct aplicacion{
    char nombre[100];
    float version;
};

struct celular{
    char marca[100];
    int n_apps;
    aplicacion *apps;
};



// Prototipo de funciones

celular registrarTelefono();
void instalarApps(celular& cel);
void infoCelular(celular cel);

int main(){
    int n_cell = 2;
    celular cells[n_cell];
    for(int i = 0; i<n_cell; i++){
        cells[i] = registrarTelefono();
        // Instalar apps
        instalarApps(cells[i]);
    }

    // Mostrar info. celulares
    std::cout << "Informacion de telefonos registrados" << std::endl;
    for(int i = 0; i<n_cell; i++)
        infoCelular(cells[i]);
    
    // Liberar memoria dinámica
    delete cells[0].apps;
    delete cells[1].apps;

    return 0;
}

celular registrarTelefono(){
    celular cel;
    cel.apps = NULL;
    std::cout << "Registrando telefono:" << std::endl;
    std::cout << "Marca: ";
    std::cin.getline(cel.marca, 100, '\n');
    std::cout << "Numero de aplicaciones: ";
    std::cin >> cel.n_apps;
    std::cin.ignore();
    std::cout << std::endl;

    return cel;
}

void instalarApps(celular& cel){
    std::cout << "Instalando apps en " << cel.marca << std::endl << std::endl;
    cel.apps = new aplicacion[cel.n_apps];

    for(int i = 0; i < cel.n_apps; i++){
        std::cout << "Ingrese nombre aplicacion: ";
        std::cin.getline(cel.apps[i].nombre, 100, '\n');
        std::cout << "Ingrese version aplicacion: ";
        std::cin >> cel.apps[i].version;
        std::cin.ignore();
        std::cout << "Aplicacion instalada!" << std::endl << std::endl;
    }
}

void infoCelular(celular cel){
    std::cout << "Mostrando informacion celular " << cel.marca << ":" << std::endl << std::endl;
    std::cout << "Cantidad de aplicaciones instaladas:" << cel.n_apps << std::endl;
    std::cout << "Aplicaciones:" << std::endl;
    for(int i = 0; i < cel.n_apps; i++)
        std::cout << "Aplicacion " << cel.apps[i].nombre << ", version " << cel.apps[i].version << std::endl <<std::endl;
}
