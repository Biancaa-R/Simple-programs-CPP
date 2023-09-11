//Fibonacci series
#include<iostream>
using namespace std;
int main(){
	int limit,n1,n2,i,temp;
	cout<<"Enter the limit of the fibonacci series";
	cin>>limit;
		n1=0;
		n2=1;
	for(i=0;i<limit;i++){

		temp=n1;
		n1=n2;
		//n2=temp;
		n2=temp+n2;
		cout<<n1<<"\t";
		
	}
}
