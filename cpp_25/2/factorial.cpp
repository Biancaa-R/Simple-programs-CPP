//To determine the factorial
#include <iostream>
using namespace std;
int main(){
	int num,fact,limit,mul;
	cout<<"Enter the number to find factorial";
	cin>>num;
	cout<<"Enter the limit of the factorial";
	cin>>limit;
	mul=num;
	fact=1;
	for(int i=0;i<limit;i++){
		fact=fact*mul;
		mul=--mul;//if I give post increment its not working, no reduction in mul
	}
	cout<<"Therefore the factorial is"<<fact;
}
