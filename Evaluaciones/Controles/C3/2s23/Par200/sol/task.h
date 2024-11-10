#include<string>
#include<iostream>

class Task{
    public:
        Task(std::string description, std::string dueDate, bool isComplete):
        descripcion(description), fechaLimite(dueDate), completo(isComplete){}

        std::string getDueDate(){return fechaLimite;}
        std::string getDescription(){return descripcion;}
        bool isComplete(){return completo;}
        void setCompleted(bool completed){completo=completed;}
        void setDueDate(std::string dueDate){fechaLimite=dueDate;}
        void setDescription(std::string description){descripcion=description;}
        void showTaskInfo(){
            // Informacion de Task
            std::cout << "Información de tarea" << std::endl;
            std::cout << "Descripción:" << descripcion << std::endl;
            std::cout << "Fecha límite:" << fechaLimite << std::endl;
            std::cout << "Completada:" << completo << std::endl;
        }
        

    private:
        std::string descripcion;
        std::string fechaLimite;
        bool completo;

};