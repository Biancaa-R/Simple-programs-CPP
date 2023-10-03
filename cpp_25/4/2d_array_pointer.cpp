//Two dimentional array:
#include<iostream>
using namespace std;
int main(){
	int rows,columns;
	cout<<"Enter the number of rows";
	cin>>rows;
	cout<<"Enter the number of columns";
	cin>>columns;
	//int arr[rows][columns];
	//int * arr= new int [rows][columns]; error
	int *arr= new int [rows*columns];
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<"Enter the element array["<<i<<"]["<<j<<"]";
			cin>>(arr[i*columns+j]);
		}
		cout<<"\n"<<i+1<<"rows completed\n";
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<(arr[i*columns+j])<<"\t";
		}
		cout<<"\n";
	}
}