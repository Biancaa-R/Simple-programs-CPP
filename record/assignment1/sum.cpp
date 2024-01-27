//Write a program to evaluate the following n series: SUM = 1 + (1/2)2
// + (1/3)3
// + (1/4)4
//+.... [K2] 
//

# include <iostream>
# include <math.h>
using namespace std;
int main()
{
    int lim;
    cout<<"Enter the limit of the sequence";
    cin>>lim;
    float sum=0.0;
    for(float i=1;i<=lim;i++){
        cout<<"1/("<<i<<")^"<<i<<"+"<<"\t";
        sum+=pow(1/i,i);
    }
    cout<<sum;
}