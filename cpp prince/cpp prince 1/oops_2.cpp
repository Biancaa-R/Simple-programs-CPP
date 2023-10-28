//Assign and print the roll,phone,address of 2 students sam,john of the class student:

# include<iostream>
using namespace std;

class student{
    private:
        int roll;
        int phone;
        string address;
        string name;
    public:
        student(int r,int p, string a,string n){
            roll=r;
            phone=p;
            address=a;
            name=n;
        }

        void display()
        {   
            cout<<"The name of the student is "<<name<<"\n";
            cout<<"The roll number of the student is"<<roll<<"\n";
            cout<<"The phone number of the student is"<<phone<<"\n";
            cout<<"The address of the student is"<<address<<"\n";
        }
};

//student Students[2];

/*int main()
{
    int roll,phone;
    string add,name;
    for (int i=0;i<2;i++){
        cout<<"Enter the name of the student";
        cin>>name;
        cout<<"Enter the roll number of the student";
        cin>>roll;
        cout<<"Enter the phone no. of student";
        cin>>phone;
        cout<<"Enter the address of the student";
        cin>>add;
        //Students[i] = student (roll,phone,add,name);
        student obj1(roll,phone,add,name);
        //doesnt work:
        obj1.display();
        continue;
    }

    /*for ( int i=0;i<2;i++){
        Students[i].display();
    }
    
}*/

int main()
{
    int roll,phone;
    string add,name;
    
    cout<<"Enter the name of the student";
    cin>>name;
    cout<<"Enter the roll number of the student";
    cin>>roll;
    cout<<"Enter the phone no. of student";
    cin>>phone;
    cout<<"Enter the address of the student";
    cin>>add;
    student obj1(roll,phone,add,name);
    obj1.display();
    fflush(stdin);
    //If not flushed it behaves erratic
    cout<<"Enter the name of the student";
    cin>>name;
    cout<<"Enter the roll number of the student";
    cin>>roll;
    cout<<"Enter the phone no. of student";
    cin>>phone;
    cout<<"Enter the address of the student";
    cin>>add;
    student obj2(roll,phone,add,name);
    obj2.display();

}