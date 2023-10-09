//9. Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next, change the program to separate 
//adjacent input strings by a space.

# include<iostream>
using namespace std;
int main()
{
	string str1,str2;
	cout<<"Enter the first string";
	cin>>str1;
	cout<<"Enter the second string";
	cin>>str2;
	str1=str2+str1;
	cout<<str1;
	return 0;
}
