//1. Declare and initialize 1D arrays which are of integer, character and string datatypes and display each of the array contents.
#include<iostream>
using namespace std;
int main(){
	int arr0[5]={1,2,3,4,5};
	char arr1[5]={'a','b','c','d','e'};
	string arr2[5]={"in","the","end","people","change"};
	int arrsize=sizeof(arr0)/sizeof(arr0[0]);
	for (int i=0;i<arrsize;i++){
		cout<<arr0[i]<<"\t";
	}
	cout<<"\n";
	int arrsize1=sizeof(arr1)/sizeof(arr1[0]);
	for (int i=0;i<arrsize1;i++){
		cout<<arr1[i]<<"\t";
	}
	cout<<"\n";
	int arrsize2=sizeof(arr2)/sizeof(arr2[0]);
	for (int i=0;i<arrsize2;i++){
		cout<<arr2[i]<<"\t";
	}	


}
