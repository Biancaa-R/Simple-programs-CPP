//gcd function:

# include <iostream>
using namespace std;

int value;
int num1,num2;
int gcd(int num1,int num2);
int main()
{   
    //num 1 should be greater than num2

    cout<<"Enter the first number";
    cin>>num1;
    cout<<"Enter the second number";
    cin>>num2;
    if (num1>num2){
        value=gcd(num1,num2);
    }
    else{
        value=gcd(num2,num1);
    }
    cout<<"The gcd of the numbers is"<<value;
    
}

int gcd(int num1,int num2){
    if (num2==0){
        return num1;
    }
    while(num2){
        int temp=0;
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    return num1;
}