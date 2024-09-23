#include <iostream>
#include <cstring>

// Pauta Control 2 Paralelo 200
struct student{
    char name[100]; // Nombre del alumno
    int id; // Identificador de alumno
    int n_grades; // Número de notas
    int *grades; // Arreglo de notas
};

// 30pts - Pregunta 1
// 5pts - Sintáxis y formato
student createStudent(){
    // 10pts - Solicitud de información general y creación de estudiante
    student estudiante;
    std::cout << "Ingrese nombre del estudiante: ";
    std::cin.getline(estudiante.name, 100, '\n');
    std::cout << "Ingrese id del estudiante: ";
    std::cin >> estudiante.id;
    std::cout << "Ingrese el número de calificaciones: ";
    std::cin >> estudiante.n_grades;
    // 10pts - Creación de arreglo de notas en memoria dinámica
    estudiante.grades = new int[estudiante.n_grades];
    for(int i=0; i<estudiante.n_grades;i++){
        std::cout << "Ingrese calificación número " << i + 1 << ": ";
        std::cin >> estudiante.grades[i];
        std::cin.ignore();
    }

    // 5pts - Retorno correcto
    return estudiante;
}

// 20pts - Pregunta 2
// 5pts - Sintáxis 
void updateGrade(student &estudiante, int pos, int new_grade ){
    // 5pts - Verificación de posición válida
    if(0<=pos<estudiante.n_grades)
        // 10pts - Modificación de nota en posición correcta
        estudiante.grades[pos] = new_grade;
}

// 20pts - Pregunta 3
// 5pts - Sintáxis y formato
void showStudentsInfo(student *estudiantes, int n_estudiantes){
    // 5pts - Muestra información general de arreglo de estudiantes
    std::cout << "Información de estudiantes" << std::endl;
    for(int i=0; i<n_estudiantes; i++){
        std::cout << "Estudiante " << i + 1 << std::endl;
        std::cout << "Nombre del estudiante: " << estudiantes[i].name << std::endl;
        std::cout << "Identificador del estudiante: " << estudiantes[i].id << std::endl;
        std::cout << "Número de calificaciones: " << estudiantes[i].n_grades << std::endl;
        std::cout << "Calificaciones: ";
        // 10pts - Muestra información de notas de cada estudiante
        for(int j = 0; j<estudiantes[i].n_grades; j++){
            std::cout<<estudiantes[i].grades[j]<<" ";
        }
        std::cout << std::endl;
    }
}

// 30pts - Pregunta 4
// 5pts - Sintáxis y formato
int main(){
    // 5pts - Crea arreglo solicitado en memoria dinámica
    int n_estudiantes = 3;
    student *estudiantes = new student[n_estudiantes];

    // 5pts - Llena la información de cada estudiante utilizando 
    // la función createStudent()
    for(int i=0; i<n_estudiantes; i++){
        estudiantes[i] = createStudent();
    }

    // 10pts - Solicita información para actualización de nota y realiza actualización
    // No es necesario que sea tal cual como aparece acá. Si el alumno desea
    // crear una nueva función para este proceso de actualización, también es correcto
    std::cout << "Actualización de nota" << std::endl;
    int id, pos, grade;
    std::cout<< "Ingrese id de estudiante: ";
    std::cin >> id;
    std::cout<< "Ingrese posición de la nota: ";
    std::cin >> pos;
    std::cout << "Ingrese nueva nota: ";
    std::cin >> grade; 

    for(int i=0; i<n_estudiantes; i++){
        if(estudiantes[i].id==id){
            updateGrade(estudiantes[i], pos, grade);
            break;
        }
    }
    
    // 5pts - Muestra la información final de los estudiantes
    showStudentsInfo(estudiantes, n_estudiantes);

    return 0;
}
