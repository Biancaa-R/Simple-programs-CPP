//Encapsulation
//getset

# include <iostream>
using namespace std;

class value{
    private:
        string name;
        int num;
    public:
        void set_data(){
            cout<<"Enter the value of name";
            cin>>name;
            cout<<"Enter the value of the number";
            cin>>num;
        }
        void get_data()
        {
            cout<<"The value of name is\t"<<name;
            cout<<"The value of number is \t"<<num;
        }
};

int main()
{
    value v1;
    v1.set_data();
    v1.get_data();
    return 0;
}