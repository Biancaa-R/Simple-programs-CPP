# include <iostream>
using namespace std;
class number
{
    int num,sum=0,n=0;
    public:
        void getinput();
        void sumofdigits();
        void display(int sum,int n);
};
void number::getinput(){
    cout<<"Enter the number";
    cin>>num;
}
void number:: sumofdigits(){
    int rem=0;
    while(num>0){
        rem=num%10;
        num=num/10;
        sum+=rem;
        n+=1;
    }
    display(sum,n);
}
void number::display(int sum,int n){
    cout<<"The sum of digits is"<<sum;
    cout<<"The number of digits is"<<n;
}
int main()
{   
    number obj;
    obj.getinput();
    obj.sumofdigits();
    
    return 0;


}