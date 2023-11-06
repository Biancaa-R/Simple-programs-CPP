//b.     Write three different classes named as employee, salary and payroll. Class employee stores the empno,
// empname and design. Class salary stores basic, da and pf.
// Inherit minimum of five employees and obtain the payroll using multiple inheritance.

/*For Central Government employees:

Dearness Allowance % = ((Average of AICPI (Base Year - 2001=100) for the past 12 months -115.76)/115.76) *100

For Central public sector employees:

Dearness Allowance % = ((Average of AICPI (Base Year - 2001=100) for the past 3 months -126.33)/126.33) *100

Where, AICPI stands for All-India Consumer Price Index.*/
/*The calculation is based on a base index of 100 and a predefined factor of 0.15.
Step 1: (Determine the Current CPI) Let's assume the current CPI stands at 150.

Step 2: (Determine the Base Index) The base index remains at 100.

Step 3: (Compute the Percentage Increase in CPI) To calculate the percentage increase in CPI, subtract the base index from the current CPI, divide the result by the base index, and then multiply by 100 to obtain the percentage increase.

Percentage increase in CPI = ((150 – 100)/100) x 100 = 50%

Step 4: (Calculate the DA Percentage) The DA percentage is determined by multiplying the percentage increase in CPI by the predefined factor.

DA percentage = 50% x 0.15 = 7.5%

Step 5: (Determine the DA Amount) To find the DA amount, multiply the employee's basic salary by the DA percentage.

DA amount = ?50,000 x 7.5% = ?3,750*/

//since there are multiple classes we need multiple arrays ...ehh

# include <iostream>
using namespace std;

class employee{
	private:
		int empno;
		string empname;
		string desig;
	public:
		void emp_initial(){
			cout<<"Enter the employee number \n";
			cin>>empno;
			cout<<"Enter the employee name \n";
			cin>>empname;
			cout<<"Enter the employee designation\n";
			cin>>desig;
			
		}
		void display_e(){
			cout<<"The employee number is "<<empno<<"\n";
			cout<<"The employee name is "<<empname<<"\n";
			cout<<"The employee designation is "<<desig<<"\n";
		}
};

class salary{
	private:
		float salary;
		//public sector employee
		float da;
		float pf;
	public:
		void sal_initial(){
		cout<<"Enter the salary of the employee\n";
		cin>>salary;
		}
		void calc()
		{
			da=((150 -126.33)/126.33) *1;
			da=da*salary;
			pf=0.12*salary+da;
		}
		
		void display_s(){
			cout<<"The salary of the employee is "<<salary<<"\n";
			cout<<"The da of the employee is "<<da<<"\n";
			cout<<"The pf of the employee is "<<pf<<"\n";
		}
};

class payroll:public employee,public salary{
	
	payroll(){
	cout<<"	The payroll of the employee is\n";
	
	display_e();
	display_s();
	
	}
	
};

int main(){
	int num;
	cout<<"Enter the number of employees\n"	;
	cin>>num;
	employee *arr1=new employee[num];
	salary *arr2=new salary[num];
	
	for(int i=0;i<num;i++){
		cout<<"Creating employee "<<i+1;
		arr1[i].emp_initial();
		//fflush(stdin);
		arr2[i].sal_initial();
		cout<<"Entered "<<i+1<<"Successfully\n";
		
	}
	for (int i=0;i<num;i++){
		arr1[i].display_e();
		arr2[i].calc();
		arr2[i].display_s();
	}
}
