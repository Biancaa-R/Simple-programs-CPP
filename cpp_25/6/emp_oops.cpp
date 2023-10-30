/*e.
Define a class of employees. It should contain employee number, name, address, and the number of dependent
 for the employee. It should also contain functions to add and display information about the employees.
  Define an array of 20 employees. Now write a simple for loop to read information about the employees. Finally,
   display all employees with more than two dependents.

*/

# include <iostream>
using namespace std;

class employee{
	private:
		string emp_name;
		int emp_num;
		string add;
		
    public:
        int dep;
        void display()
        {
            cout<<"Name:"<<emp_name<<"\n";
            cout<<"emp_num:"<<emp_num<<"\n";
            cout<<"address:"<<add<<"\n";
            cout<<"dependants:"<<dep<<"\n";
        }
        void setdata(){
            cout<<"Enter the employee name";
            cin>>emp_name;
            cout<<"Enter the employee num";
            cin>>emp_num;
            cout<<"Enter the address";
            cin>>add;
            cout<<"Enter the dependents";
            cin>>dep;
        }
};
int main(){
    //Define an array of 20 employees lets keep it custom
    int num;
    cout<<"Enter the number of employees";
    cin>>num;
    employee *arr1=new employee [num];
    //employee *arr1= new employee[num] gives no warnings but employee arr1[num] gives

    for(int i=0;i<num;i++){
        arr1[i].setdata();
    }
    //displaying data where dependancies >2:
    for(int i=0;i<num;i++){
        if(arr1[i].dep>=2){
            arr1[i].display();
        }
    }
    return 0;
}