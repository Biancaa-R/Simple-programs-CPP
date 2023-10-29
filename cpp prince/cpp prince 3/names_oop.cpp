// Print the names of the student by creating students class .If no name is passes name is unknown, otherwise name is value passed;
# include <iostream>
# include <stdbool.h>
using namespace std;

class student{
    private: 
        int roll;
        string name;
    public:
        student(int r,string n){
            roll=r;
            name=n;
        }
        void disp(){
            if (name!="")
            {
                cout<<"The name of the student is"<<name;
            }
            else{
                cout<<"The name of the student is unknown";
            }
        }
};

int main(){
    int len;
    cout<<"Enter the number of students";
    cin>>len;
    for (int i=0;i<len;i++)
    {
        string n;
        cout<<"Enter the name of the student";
        fflush(stdin);
        getline(cin,n);
        
        //cout<<name;
        student * stu =new student(i,n);
        stu->disp();
        delete stu;
    }
}