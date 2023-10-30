//   Write a C++ program  with a class name student. Keep roll number and name as private data members and write the following functions in public mode.

//i.          void setdata(int srn, string sname) - Assigns values directly from the main function

//ii.          void putdata() - Displays the values to the user

# include <iostream>
using namespace std;

class student{
	private:
		int roll;
		string name;
	public:
		void setdata(int roll1,string name1)
		{
			roll=roll1;
			name=name1;
			cout<<"Value set successfully";
		}
		
		void putdata()
		{
			cout<<"The value of roll number is"<<roll<<"\n";
			cout<<"The value of name is"<<name<<"\n";
		}
};

int main()
{
	int roll;
	string name;
	cout<<"Enter the roll number";
	cin>>roll;
	cout<<"Enter the name of the student";
	cin>>name;
	student s1;
	s1.setdata(roll,name);
	s1.putdata();
	cout<<"end";
}
