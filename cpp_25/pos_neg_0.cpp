#include <iostream>
using namespace std;

int main(){
	

	int num;
	cout<<"Enter the number";
	cin>>num;
	

	if (num==0){
		cout<<"The entered number is zero enter another number"<<" /n";
		cin>>num;
	}
	
	if (num>0){
		cout<<"The entered number is positive "<<"/n";
	}
	if (num<0){
		cout<<"The entered number is negative "<<"/n";
	}
	else{
		cout<<"end of program ";
		
	return 0;
		
	}
}
