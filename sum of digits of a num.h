#include <iostream>
#include <stdlib.h>

int main()
 {
   int num,sum=0,rem;
  std::cout << "\n Enter any number \n";
  std::cin>>num;

  while(num>0)
  { rem=num%10;
     sum=sum+rem;
     num=num/10;

  }
  std::cout<<"\n The sum of the digits is \n"<<sum;
  return 0;
 
}