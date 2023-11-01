//conversion of pointer variable:

# include <iostream>
using namespace std;

int main()
{
    int p=1025 ;//100 0000 0001
    int *ptr;
    ptr=&p;
    cout<<"The size of the integer is "<<sizeof(int)<<"\n";
    cout<<"The value of the pointer is"<<ptr<<"\n";
    cout<<"The value pointed is "<<*ptr<<"\n";
    char *p0;
    p0 = (char*)ptr;
    cout<<"The value of the pointer is"<<p0<<"\n";
    cout<<"The value pointed is "<<*p0<<"\n";    


}