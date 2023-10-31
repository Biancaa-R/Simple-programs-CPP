//2) Check whether a given string is a palindrome using 1D array
//Input:
//madam
//Output:
//Palindrome 

# include<iostream>
# include<string>
# include <stdbool.h>

using namespace std;
int main()
{   
    string string1;
    bool pal=true;
    cout<<"Enter the string to check if palindrome";
    cin>>string1;
    int len=string1.length();
    string arr1[len];
    for (int i=0;i<len;i++){
        arr1[i]=string1[i];
    }

//displaying the array:
for (int i=0;i<len;i++){
    cout<<arr1[i]<<"\t";
}
cout<<"\n";

//checking:
for(int i=0;i<len;i++){
    if (arr1[i]!=arr1[len-1-i]){
        pal=false;
    }
}

if (pal==true){
    cout<<"The entered string is a palindrome";
}
else{
    cout<<"The entered string is not a palindrome";
}

}
