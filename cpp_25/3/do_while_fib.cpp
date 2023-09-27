//Program using do while:
//fibonacci series
# include <iostream>
using namespace std;
int main(){
    int num1=0,num2=1,temp;
    int lim;
    int i=0;
    cout<<"Enter the limit of the fibonacci series";
    cin>>lim;
    do{
        temp=num1;
        num1=num2;
        num2=temp+num2;
        cout<<num1<<"\t";
        i= ++i;

    }
    while(i<lim);
    //Always remember only the termination condition comes in do while
}
