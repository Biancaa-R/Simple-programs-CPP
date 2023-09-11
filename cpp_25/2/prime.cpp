//To check if a number is prime or not
#include<iostream>
using namespace std;
int main(){
	int num,i,found=0;
	cout<<"Enter the number";
	cin>>num;
	for(i=2;i<((num/2)+1);i++){
		if(num%i==0){
			cout<<"The number"<<num<<"\t is composite";
			found=1;
			break;
			
		}
	}
	if (found==0){
		cout<<"The number"<<num<<"\t is prime";
	}
}

