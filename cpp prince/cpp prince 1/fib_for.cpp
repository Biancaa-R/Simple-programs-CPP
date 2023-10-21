# include <iostream>
using namespace std;
int main()
{
    //fibonacci series
    int num1=1,num2=0,lim,temp;
    cout<<"Enter the limit of the fibonacci series";
    cin>>lim;
    for(int i=0;i<lim;i++){
        cout<<num1<<"\t";
        temp=num2;
        num2=num1;
        num1=num1+temp;
    }
    return 0;
}