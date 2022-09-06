#include<iostream.h>
#include<conio.h>

int main()
{
clrscr();
int num,sum=0;
cout<<"Enter a number to find the sum of its digits \n";
cin>>num;
while (num!=0){
sum=sum+num%10;
num=num/10;
}
cout<<"the number is \n"<<sum;
return 0;}

