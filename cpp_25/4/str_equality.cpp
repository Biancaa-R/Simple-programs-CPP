/*8. Write a program to read two string and report whether the strings are equal. If not, report which of the two 
is the larger. Now, change the program to report whether the strings have the same length and if not report which is longer.
so we have to use sizeof operator*/

# include <iostream>
# include <string>
//it works without including string as well
using namespace std;
int main()
{
	string str1,str2;
	cout<<"Enter the first string\t";
	cin>>str1;
	cout<<"Enter the second string\t";
	cin>>str2;
	if(str1==str2){
		cout<<"The given strings are equal";
	}
	else{
		//larger and longer
		int size1=0,size2=0;
		int len1=0,len2=0;
		//size1=sizeof(str1);
		//size2=sizeof(str2);
		//len1=(sizeof(str1)/sizeof(str1[0]));
		//len2=(sizeof(str2)/sizeof(str2[0]));
		
		//sizeof more suitable for arrays
		size1=str1.size();
		size2=str2.size();
		len1=str1.length();
		len2=str2.length();
		//size
		if(size1==size2){
			cout<<"Both the strings have the same size"<<size1;
		}
		else if(size1>size2){
			cout<<"str1 has more size "<<size1;
		}
		else if(size2>size1){
			cout<<"str2 has more size"<<size2;
		}
		
		//length
		if(len1==len2){
			cout<<"Both the strings have the same length";
		}
		else if(len1>len2){
			cout<<"str1 has more length "<<len1;
		}
		else if(size2>size1){
			cout<<"str2 has more length"<<len2;
		}
	}
}

