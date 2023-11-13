//Method overloading:
//compile time polymorphism

# include <iostream>
using namespace std;

class addition{
    public:
        int add1(int num1,int num2){
            int sum;
            sum=num1+num2;
            return sum;
        }

        float add1(float num1,float num2){
            float sum;
            sum=num1+num2;
            return sum;
        }
};
int main()
{
    addition obj1;
    int num1,num2;
    int result;
    cout<<"Enter the value of the first number";
    cin>>num1;
    cout<<" Enter the value of the second numeber";
    cin>>num2;
    result=obj1.add1(num1,num2);
    cout<<"The sum is \t"<<result;

    float num3,num4;
    float result1;
    cout<<"Enter the value of the first number";
    cin>>num3;
    cout<<" Enter the value of the second numeber";
    cin>>num4;
    result1=obj1.add1(num3,num4);
    cout<<"The sum is\t"<<result1;

}