/*a.     Write a C++ program  with a class name getset. Keep a and b as private data members and write the following functions in public mode.

i.     void getdata() - Reads a and b values from the user and display the values

ii.     void setdata(int,int) - Modify the values of private fields by assigning different set of numbers to the private fields

iii.     void display() – Display the values of two numbers a and b.

Note: Place the functions getdata and setdata outside the class and display inside the class*/

# include <iostream>
# include <stdbool.h>

using namespace std;

class getset{
	
	private:
		int a,b;
		//data values
	public:
		getset(int x ,int y){
			a=x;
			b=y;
			//constructor
		}
		void display()
		{
			cout<<"The value of A is "<<a<<"\n";
			cout<<"The value of B is "<<b;
		}
		void setdata(int x,int y){
			cout<<"The value of a, b changed successfully";
			a=x;
			b=y;
		}
		void getdata(int a,int b)
		{	
			cout<<"The value of A is "<<a<<"\n";
			cout<<"The value of B is "<<b;				
		}
};
int main()
{	
	int a,b;
	int choice;
	cout<<"Enter the values of a,b";
	cin>>a;
	cin.ignore();
	cin>>b;
	getset obj1=getset(a,b);
	while (true){
		cout<<"Enter your choice of action 1,2,3,4\n";
		cout<<"getdata,setdata,display,stop\n";
		cin>>choice;
		if(choice==1){
			cout<<"Enter the values of a,b\n";
			cin>>a;
			cin.ignore();
			cin>>b;
			obj1.getdata(a,b);
		}
		else if(choice==2){
			cout<<"Enter the values of a,b\n";
			cin>>a;
			cin.ignore();
			cin>>b;
			obj1.setdata(a,b);
						
		}
		else if (choice==3){
			obj1.display();
		}
		else{
			break;
		}
	}
	cout<<"The end";
}

/*Enter the values of a,b1 2
Enter your choice of action 1,2,3,4
getdata,setdata,display,stop
3
The value of A is 1
The value of B is 2Enter your choice of action 1,2,3,4
getdata,setdata,display,stop
2
Enter the values of a,b
5 6
The value of a, b changed successfullyEnter your choice of action 1,2,3,4
getdata,setdata,display,stop
3
The value of A is 5
The value of B is 6Enter your choice of action 1,2,3,4
getdata,setdata,display,stop
4
The end
--------------------------------
Process exited after 31.52 seconds with return value 0
Press any key to continue . . .
*/
