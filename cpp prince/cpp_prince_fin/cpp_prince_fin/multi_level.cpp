// multilevel inheritance
# include <iostream>
using namespace std;

class super_class{
    public:
        void display_data1()
        {
            cout<<"This is the super class";
        }
};
class sub_class:public super_class{
    public:
        void display_data2()
        {
            cout<<"This is the subclass";
        }
};
class inherited:public sub_class{
    public:
        void display_data3()
        {
            cout<<"This is the final class";
        }
};

int main()
{
    inherited obj1;
    obj1.display_data1();
    obj1.display_data2();
    obj1.display_data3();
}