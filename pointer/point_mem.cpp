//Understanding the memory of pointers:
# include <iostream>
using namespace std;
int main ()
{
    int p;
    int * ptr;
    p=10;
    ptr=&p;
    cout<<"The memory address of p is "<<ptr<<"\n";
    ptr=ptr+1;
    cout<<"The new memory address of p is "<<ptr<<"\n";
    cout<<"The size of int is"<<sizeof(int)<<"\n";
    //lets see the value at p+1
    cout<<"The value at p+1 is"<<*ptr<<"\n";
    //both the values differ by 4
    //The memory address of p is 0x6fe51ff844
    //The new memory address of p is 0x6fe51ff848
    //The size of int is4
    int arr1[5]={1,2,3,4,5};
    ptr=arr1;
    for (int i=0;i<6;i++){
        
        cout<<*ptr<<"\t";
        ptr++;
        //In case it goes beyond what the array is defined 0 is printed
    }
}