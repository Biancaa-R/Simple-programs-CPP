#include <iostream>

using namespace std;

int main()
{
	int num,rem;
	cout<<"Enter the number to check if odd or even";
	cin>>num;
	rem=num%2;
	if(rem==0){
		cout<<"The number "<<num<<" is even";
	}
	if(rem!=0){
		cout<<"The number "<<num<<" is odd";
	}
	
	return 0;
}

