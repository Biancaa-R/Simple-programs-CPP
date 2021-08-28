#include <iostream>
#include <stdlib.h>

int main() {
int i,num,prod;
std::cout<<"\n enter character \n";
std::cin>>num;
  for (i=1;i<11;)
  {prod=i*num;
    std::cout<<"\n"<<i<<" x "<< num <<" = "<<prod;
    i++;}
return 0;
}