#include <iostream>

using namespace std;

int main()
{
	int num1,num2,sum,rem;
	cout<<"Enter the first number\n";
	cin>>num1;
	cout<<"Enter the second number\n";
	cin>>num2;
	sum=num1+num2;
	rem=num1-num2;
	
	num1=(sum+rem)/2;
	num2=(sum-rem)/2;
	
	cout<<"The value of the first number is "<<num1<<"\n";
	cout<<"The value of second number is"<<num2<<"\n";
	
	return 0;
	
	
}

