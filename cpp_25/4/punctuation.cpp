//10.  Write a program to strip the punctuation from a string.
#include<iostream>
# include<string>
# include<stdbool.h>
using namespace std;
int main(){
	char punc[]={',','.','*','-','_','!'};
	string value;
	string new1= "";
	bool bool_val=false;
	cout<<"Enter the string with punctuation";
	cin>>value;
	//getline(cin, value);
	for(char i:value){
		bool_val=false;
		for (char pun:punc){
			if (i==pun){
				cout<<"Found punctuation"<<i<<"\n";
				bool_val=true;
				break;
			}
		}
			//new1.append((string)i);
			if (bool_val==false){
				new1 +=i;
				bool_val=false;
			}
			
	}
	cout<<"The string without punctuation is "<<new1;
	return 0;
}