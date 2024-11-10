#include<string>
#include<vector>
#include"task.h"

class TaskList{
    public:
        TaskList(){};
        TaskList(std::string nameList): nombreListaTareas(nameList){}
        void addTask(Task tarea){
            listaTareas.push_back(tarea);
        }
        std::string getTasListkName(){
            return nombreListaTareas;
        }

        void showTaskListInfo(){
            for(int i = 0; i< listaTareas.size(); i++)
                listaTareas[i].showTaskInfo();
        }

        void setCompleted(int index){
            listaTareas[index].setCompleted(true);
        }

    private:
        std::string nombreListaTareas;
        std::vector<Task> listaTareas;
};