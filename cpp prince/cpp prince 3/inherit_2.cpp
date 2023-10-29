//Create a parent class with a method that prints this is parent class and its subclass with another method that prints this is the subclass now create objs and call:
//1. method of parent by obj parent
//2.method of parent by obj of child
//3.method of child by object of child

# include <iostream>
using namespace std;

class Superclass{
    public:
        void display_parent()
        { 
            cout<<"This is the parent class";
        }
};
class Subclass: public Superclass{
    public:
        void display_child()
        {
            cout<<"This is the child class";
        }
};

int main()
{
    cout<<"oject creation of parent";
    Superclass obj1;
    obj1.display_parent();

    cout<<"Object creation of child";
    Subclass obj2;
    obj2.display_child();

    cout<<"Inheritance";
    Subclass obj3;
    obj3.display_parent();

    return 0;
}