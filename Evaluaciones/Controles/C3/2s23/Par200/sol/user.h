#include<string>
#include"tasklist.h"

class User{
    public:
        User(std::string username){nUsuario = username;}
        std::string getUsername(){
            return nUsuario;
        }
        void assignTaskList(TaskList tlist){tlista = tlist;}
        void showTaskInfo(){
            tlista.showTaskListInfo();
        }
        void completedTask(int index){
            tlista.setCompleted(index);
        }

    private:
        std::string nUsuario;
        TaskList tlista;
    
};