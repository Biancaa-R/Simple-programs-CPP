// Create a class named student with string variable name,integer variable roll_num assign roll num as 2 nd name as john by obj creation:
# include <iostream>
using namespace std;

class student{
    private:
        string name;
        int roll;
    public:
        student(string a,int b){
            name=a;
            roll=b;
        }
        void display(){
            cout<<"The name of the student is"<<name<<"\n";
            cout<<"The roll number of student is"<<roll;
        }
};

int main()
{
    string name="John";
    int roll=2;
    student obj1(name,roll);
    obj1.display();
}