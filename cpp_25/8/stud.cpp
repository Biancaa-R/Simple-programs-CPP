/*d.     Write three different classes named as student, test, and result. Class student stores the roll_number, 
Class test stores the marks obtained from three subjects and class result contains the total marks obtained from the test. 
The class result can inherit the details 
of the marks obtained from the test and the roll_number of students through multilevel inheritance.*/

# include <iostream>
using namespace std;

class student{
    public:
	int roll_number;
	string name;
	
		void s_initialize(){
			cout<<"Enter the roll number of student";
			cin>>roll_number;
			cout<<"Enter the name of the student";
			cin>>name;
		}

        void s_diplay()
        {
            cout<<"The roll number of student is"<<roll_number<<"\n";
            cout<<"The name of the student is"<<name<<"\n";
        }
};

class test{
    public:
    float mark1,mark2,mark3;
        void t_initialize()
        {
            cout<<"Enter the marks1";
            cin>>mark1;
            cout<<"Enter the mark2";
            cin>>mark2;
            cout<<"Enter the mark3 ";
            cin>>mark3;
        }
	
};

class result: public test,public student{
    public:
        float sum;
    result()
    {
        sum=mark1+mark2+mark3;
    }
    void compute_result()
    {
        sum=mark1+mark2+mark3;
    }
    void r_display()
    {
        cout<<"The result of the student is"<<sum<<"\n";
    }
};

int main()
{   
    int num;
    cout<<"Enter the number of students\n";
    cin>>num;
    result *arr1 = new result[num];
    for(int i=0;i<num;i++){
        arr1[i].s_initialize();
        arr1[i].t_initialize();
        arr1[i].compute_result();
    }

    for(int i=0;i<num;i++){
        arr1[i].s_diplay();
        arr1[i].r_display();
    }
}