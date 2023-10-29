// Function over riding:

# include <iostream>
using namespace std;

class animal{
    public:
        void eat(){
            cout<<"animal eats food";
        }
};

class dog:public animal{
    public:
        void eat(){
            cout<<"Dog eats food";
        }
};

int main()
{
    dog d1;
    d1.eat();
    //only the latest function is available
    return 0;
}