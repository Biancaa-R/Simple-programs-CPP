#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
int num,sum=0,n=0,i=0,rem,rev=0;
cout<<"\n Enter the number to find sum of digits \n";
cin>>num;
while( num>0){
sum=sum+num%10;
num=num/10;
n++;
}
cout<<"\n The sum of the digits is \n"<<sum;
cout<<"\nThe total no.of digits= \n"<<n;
while (i<n){
rem=num%10;
num=num/10;
rev=rev+(rem*pow(10,n-i));
i++;
}
cout<<"\nThe reversed number is \n"<<rev;}




