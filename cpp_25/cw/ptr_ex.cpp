//C++ program to understand Pointer variables
#include<iostream>
using namespace std;
class address
{
 int *ip,ival;
 double *dp,dval;
 float *fp,fval;
 char *cp,cval;
 public:
 address()
 {
 ival=10;
 ip=&ival;
 cout<<&ip<<endl;
 cout<<*ip<<endl;
 dval=125641;
 dp=&dval;
 cout<<&dp<<endl;
 cout<<*dp<<endl;
 fval=10.569;
 fp=&fval;
 cout<<&fp<<endl;
 cout<<*fp<<endl;
 cp=&cval;
 cval='k';
 cout<<&cp<<endl;
 cout<<*cp<<endl;
 }
 void increment()
 {
//important
 int iarr[]={753,951,456,852};
 int iv,*iptr;
 iptr=iarr; //the memory address of the first member
 for(iv=0;iv<4;iv++)
 {
 cout<<"Address of item "<<iv+1<<" is "<<iptr<<endl;
 cout<<"It's corresponding value is "<<*iptr<<endl;
 iptr++;
 }
 //Using while loop
 iptr=iarr;
 iv=0;
 while(iptr<=&iarr[3])
 {
 cout<<"Address of item "<<iv+1<<" is "<<iptr<<endl;
 cout<<"It's corresponding value is "<<*iptr<<endl;
 iptr++;
 iv++;
 } 
  }
 void decrement()
 {
 int iarr[]={753,951,456,852};
 int iv,*iptr;
 iptr=&iarr[3];
 for(iv=4;iv>0;iv--)
 {
 cout<<"Address of item "<<iv-1<<" is "<<iptr<<endl;
 cout<<"It's corresponding value is "<<*iptr<<endl;
 iptr--;
 }
 }
};
int main()
{
 address o;
 o.increment();
 o.decrement();
} 