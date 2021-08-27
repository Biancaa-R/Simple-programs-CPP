#include <iostream>
#include<stdlib.h>

int main()

 {
   double num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
   float num_numbers,average,sum_num,rem_num;
  std::cout << "\n how many numbers do you want to take average (range within 10) \n";
  std::cin>>num_numbers;

  rem_num=10-num_numbers;

std::cout<<"\n If you want to find average of "<<num_numbers<<" numbers,Type 0 for the other "<<rem_num<<" numbers";
  
std::cout << "\n Enter the first number\n" ;
std::cin>>num1;
std::cout << "\n Enter the second number\n" ;
std::cin>>num2;
std::cout << "\n Enter the third number\n" ;
std::cin>>num3;
std::cout << "\n Enter the fourth number\n" ;
std::cin>>num4;
std::cout << "\nEnter the fifth number\n" ;
std::cin>>num5;
std::cout << "\nEnter the sixth number\n" ;
std::cin>>num6;
std::cout << "\nEnter the seventh number\n" ;
std::cin>>num7;
std::cout << "\nEnter the eigth number\n" ;
std::cin>>num8;
std::cout << "\nEnter the ninth number\n" ;
std::cin>>num9;
std::cout << "\n Enter the tenth number\n" ;
std::cin>>num10;

sum_num=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;

std::cout<<"\n the sum of all numbers is \n"<<sum_num;

average=sum_num/num_numbers;
std::cout<<"\n The average of the numbers is \n"<<average;

return 0;

}