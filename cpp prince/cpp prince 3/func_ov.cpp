//Function overloading:

# include <iostream>
using namespace std;

class calc{
    public:
    static int add(int num1){
        
        return num1;
    }
    static int add(int num1,int num2,int num3){
        int sum;
        sum=num1+num2+num3;
        return sum;
    }
   static float add(float num1,float num2){
        float sum;
        sum=num1+num2;
        return sum;
    }
};
int main()
{   
    calc c1;
    cout<<"addition of 2,5"<<c1.add(25)<<"\n";
    cout<<"Addition of 5,6,7"<<c1.add(5,6,7)<<"\n";
    cout<<"Addition of 3.5,6.7"<<c1.add(3.5,4.5)<<"\n";
}