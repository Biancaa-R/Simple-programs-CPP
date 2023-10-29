//Polymorphism
//Create a class print num, to print various numbers in different datatypes with same method name:

# include <iostream>
using namespace std;

class Printnum{
    public:
        static void printn(int num1){
            cout<<num1;
        }
        static void printn(float num2){
            cout<<num2;
        }
};

int main()
{
    Printnum p1;
    p1.printn(5);
    //float num=2.4;
    p1.printn(2.4);
}