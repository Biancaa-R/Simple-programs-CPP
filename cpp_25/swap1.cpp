#include <iostream>

using namespace std;

//swapping two numbers

int main(){
	
	int num1,num2,temp;
	cout<<"enter the first number";
	cin>>num1;
	cout<<"Enter the second number";
	cin>>num2;
	
	temp=num1;
	num1=num2;
	num2=temp;
	
	cout<<"The swapped value of num 1 is\t"<<num1<<"\n";
	cout<<"The swapped value of num 2 is\t"<<num2<<"\n";
	
	return 0;
	
}



