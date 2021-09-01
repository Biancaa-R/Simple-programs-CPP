#include <iostream>
#include <stdlib.h>

int main() 
{
  int num,number;
  float sum=0,val,avg;

 std::cout << "\n How many numbers do you want to take average for? \n";
 std::cin>>num;

 for (number=1;number<=num;number++)
  { 
    std::cout<<"\n Enter the number\n";
    std::cin>>val;
    sum=sum+val;
  }
 avg= sum/num;
 std::cout<<"\n The sum of the numbers is\n"<<sum;
 std::cout<<"\n The average of the numbers is\n"<<avg;

 return 0;
}