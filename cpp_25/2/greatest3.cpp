//Largest of three numbers
#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter the first number";
	cin>>num1;
	cout<<"Enter the second number";
	cin>>num2;
	cout<<"Enter the third number";
	cin>>num3;
	if (num1>num2 && num1>num3){
		cout<<num1<<"Is the greatest";
	}
	else if (num2>num1 && num2>num3){
		cout<<num2<<"Is the greatest";
	}
	else if(num3>num1 && num3>num2){
		cout<<num3<<"Is the greatest";
	}
	//If two numbers are great,equal
	else if(num1==num2 && num1>num3){
		//assuming num3 to be least
		cout<<num1<<"Is the greatest";
	}
	else if(num2==num3 && num2>num1){
		cout<<num2<<"is the greatest";
	}
	else if(num1==num3 && num1>num2){
		cout<<num1<<"Is the greatest";
	}
	else{
		cout<<"All three numbers are equal"<<num1;
	}
	return 0;
}
