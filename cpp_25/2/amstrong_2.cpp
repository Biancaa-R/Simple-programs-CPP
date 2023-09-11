#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num,num1;
	
	int rem=1,count=0;
	int armstrong=0;
	
	cout<<"Enter the number";
	cin>>num;
	int temp=num;
	num1=num;
	int j,i;
	int val=1;
	//to find the length of the number
	while(rem>0){
		rem=(temp/10);
		temp=(temp/10);
		count=count+1;
	}
	//so now count is the len
	for (i=0;i<=count;i++){
	
		rem= num % 10;
		num=num/10;
		
		/*for(j=0;j>count;j++){
			val=val*rem;     //error varudhu logical
			cout<<"\n"<<val;
		}*/
		val=pow(rem,count);
		armstrong=armstrong+val;
	}
	cout<<"\n"<<armstrong;
	if (armstrong==num1){
	cout<<"Yes it is a armstrong number";}
	else{
		cout<<"Its not a armstrong number";
	}
}
