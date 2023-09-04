#include <iostream>
using namespace std;

int main(){
	

	int num, i=0, choice;
	
	while (i>=0,i++){
	
		cout<<"Enter the number";
		cin>>num;
	
		if (num>0){
			cout<<"The entered number is positive /n";
			cout<<"Do you want to enter more no.s? 0,1/n";
			cin>>choice;
			if (choice==0){
				break;
			}
		
		}
		if (num<0){
			cout<<"The entered number is negative /n";
			cout<<"Do you want to enter more no.s? 0,1/n";
			cin>>choice;
			if (choice==0){
				break;
			}
		}
		if (num==0){
			cout<<"The entered number is zero/n";
			cout<<"Do you want to enter more no.s? 0,1/n";
			cin>>choice;
			if (choice==0){
				break;
		}
	}
		else{
			cout<<"end of program/n";
			cout<<"Do you want to enter more no.s? 0,1/n";
			cin>>choice;
			if (choice==0){
				break;}
		}
		return 0;
			
		
  }
}

