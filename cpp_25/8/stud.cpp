/*d.     Write three different classes named as student, test, and result. Class student stores the roll_number, 
Class test stores the marks obtained from three subjects and class result contains the total marks obtained from the test. 
The class result can inherit the details 
of the marks obtained from the test and the roll_number of students through multilevel inheritance.*/

# include <iostream>
using namespace std;

class student{
	int roll_number;
	string name;
	public:
		void s_initialize(){
			cout<<"Enter the roll number of student";
			cin>>roll_number;
			cout<<"Enter the name of the student";
			cin>>name;
		}
};

class test{
	
};
