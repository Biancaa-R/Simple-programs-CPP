//amstrong only for 3 no.s
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num,rem,val;
	int arm=0;
	cout<<"Enter the number";
	cin>>num;
	for(int i=0;i<3;i++){
	
		rem=num%10;
		num=num/10;
		cout<<(rem);
		val=rem*rem*rem;
		cout<<"\n";
		arm=arm+val;
}
	cout<<arm;	
	
}

