//a.      Develop a class student in C++. Inherit it into engineering, arts, commerce, and science students. 
//Inherit engineering student into computer science, electronics and communication, and information technology student. 
//Write a program to use pointer to the student class to access a record of the computer science student.

# include <iostream>
using namespace std;

class student{
    public:
        void disp_stu(){
            cout<<"This person is a student";
        }
};
class arts: public student{
    public:
        void disp_art(){
            cout<<"Of art discipline";
        }
};

class engineering: public student{
    public:
        void disp_eng(){
            cout<<"Of engineering discipline";
        }
};

class commerce: public student{
    public:
        void disp_com(){
            cout<<"Of commerce discipline";
        }
};

class science: public student{
    public:
        void disp_sci(){
            cout<<"Of science discipline";
        }
};

class cse: public engineering{
    public:
        void disp_cse(){
            cout<<"cse department";
        }
};

class ece: public engineering{
    public:
        void disp_ece(){
            cout<<"Of ece department";
        }
};

class it: public engineering{
    public:
        void disp_it(){
            cout<<"Of it department";
        }
};

int main()
{
    int choice;
    cout<<"What is your discipline of study(art 1 engineering 2 commerce 3 science 4)?";
    cin>>choice;
    if (choice==1){
        arts obj1;
        obj1.disp_stu();
        obj1.disp_art();
    }
    if (choice==2){
        cout<<"Enter your department cse1, ece 2 ,it 3";
        cin>>choice;
        if (choice==1){
            cse obj1;
            obj1.disp_stu();
            obj1.disp_eng();
            obj1.disp_cse();
        }
        if (choice==2){
            ece obj1;
            obj1.disp_stu();
            obj1.disp_eng();
            obj1.disp_ece();
        }
        if (choice==3){
            it obj1;
            obj1.disp_stu();
            obj1.disp_eng();
            obj1.disp_it();
        }
    }
   if (choice==3){
        commerce obj1;
        obj1.disp_stu();
        obj1.disp_com();
   }
   if (choice==4){
        science obj1;
        obj1.disp_stu();
        obj1.disp_sci();
   }
}