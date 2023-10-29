// Print the names of the student by creating students class .If no name is passes name is unknown, otherwise name is value passed;
# include <iostream>
# include <stdbool.h>
using namespace std;

class student{
        
    public:
        string name;
        student(string n){
            
            name=n;
        }
        student(){
            name="unknown";
        }
        
};

int main(){
    string name1, name2;
    //we are fixing the number of students beforehand
    cout<<"Enter the name of the first student";
    getline(cin,name1);
    if (name1==""){
        student obj1;
        cout<<"The name of the student is "<<obj1.name;
    }
    else{
        student obj1= student (name1);
        cout<<"The name of the student is "<<obj1.name;
    }

    cout<<"Enter the name of the second student";
    getline(cin,name2);
    if (name2==""){
        student obj2;
        cout<<"The name of the student is "<<obj2.name;
    }
    else{
        student obj2=student(name2);
        cout<<"The name of the student is "<<obj2.name;
    }
      
    }
