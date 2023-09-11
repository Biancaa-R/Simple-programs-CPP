//To compute the power of a number
#include<iostream>
using namespace std;
int main(){
	int num,pow,i,prod;
	cout<<"Enter the number to compute power";
	cin>>num;
	cout<<"Enter the power of the number";
	cin>>pow;
	prod=1;
	for (i=0;i<pow;i++){
		prod=prod*num;
	}
	cout<<"The power "<<pow<<"of the number"<<num<<"is"<<prod;
	return 0;
}
