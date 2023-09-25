/*d. Write a C++ program to get the following as Output. Get 2 integer values and 2 double values and compare the values. Get a character input and print its ASCII value.

Enter two integer values: 2
3
Entered integer values are 2 and 3

Enter two double values: 3.3
2.2
Entered double values are 3.3 and 2.2

Boolean Results:
Integer: 2>3 is 0
Double: 3.3>2.2 is 1

Enter a character: z
The ASCII value of z is 122*/

//Therefore we are using ignore function again
#include<iostream>
using namespace std;
int main(){
	int num1,num2,result=0;
	double doub1,doub2;
	char var;
	int ascii;
	cout<<"Enter the numbers separated by space";
	cin>>num1;
	cin.ignore();
	cin>>num2;
	cout<<"Enter the doubles separated by space";
	cin>>doub1;
	cin.ignore();
	cin>>doub2;
	cout<<"Enter the char to find ascii values";
	cin>>var;
	
	if (num1>num2){
		result=1;
	}
	cout<<num1<<"> than "<<num2<<" is "<<result<<" \n";
	result=0;
	if (doub1>doub2){
		result=1;
	}
	cout<<doub1<<"> than "<<doub2<<" is "<<result<<" \n";

	
	ascii=(int)var;
	cout<<ascii<<" is the ascii value of "<<var;
	return 0;
	
}

