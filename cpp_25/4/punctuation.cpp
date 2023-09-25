//10.  Write a program to strip the punctuation from a string.
#include<iostream>
using namespace std;
int main(){
	string punc[7]={",",".",";",":","-","?","!"};
	string value;
	cout<<"Enter the string with punctuation";
	cin>>value;
	for(string pun:punc ){
		for(string i:value){
			if (i==pun){
				cout<<"Found a punctuation";
			}
		}
	}
	return 0;
}
