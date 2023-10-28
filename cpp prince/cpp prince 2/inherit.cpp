# include <iostream>
using namespace std;

class animal{

    public:
        void hunt(){
            cout<<"\t Is hunting";
        }
};

class dog : public animal{
    private:
        string name="dog";
    public:
        void bark(){
            cout<<name;
            cout<<"\t Is barking";

        }
};

int main()
{
    dog d1; 
    d1.bark();
    d1.hunt();
}