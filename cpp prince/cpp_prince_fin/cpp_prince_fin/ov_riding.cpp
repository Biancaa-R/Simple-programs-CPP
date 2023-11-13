//Function overriding 
//runtime polymorphism

# include <iostream>
using namespace std;

class super_class{
    public:
        void display()
        {
            cout<<"This is the interior of the super_class";
        }
};
class sub_class:public super_class{
    public:
        void display()
        {
            cout<<"This is the interior of the sub_class";
        }
};
int main()
{
    sub_class obj1;
    obj1.display();
    return 0;
}