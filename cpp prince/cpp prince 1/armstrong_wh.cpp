//Using while and to check armstrong num or not:

# include <iostream>
# include <math.h>
using namespace std;
int main()
{
    int num1,sum=0,rem,armstrong,len=0,num;
    cout<<"Enter the number to check if armstrong";
    cin>>num;
    num1=num;
    armstrong=num;
    //finding the number of digits:
    while(num>0){
        num=num/10;
        len+=1;
    }
    //splitting the num
    while(num1>0){
        rem=num1%10;
        int val;
        val=pow(rem,len);
        sum=sum+val;
        num1=num1/10;
    }

    if(sum==armstrong){
        cout<<"Yes it is an armstrong number";
    }
    else{
        cout<<"No it is not an armstrong number";
    }
    return 0;
}