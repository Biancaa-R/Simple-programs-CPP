//const dest:

# include <iostream>
using namespace std;
int count=0;
//if count declared inside class it doesnt work
//each instance of class will have count with 0 as a fresh start
class sample{
    
    public:
        sample();
        ~sample();
};
sample::sample(){
    count++;
    cout<<"The object is created "<<count<<"times\n";
    // return type specification for constructor invalid 
}
sample::~sample()
{
    //sample(); infinite loop ;D
    cout<<"The object is destroyed"<<count <<"times\n";
    count--;
}
int main()
{
sample obj1,obj2,obj3,obj4; //creation of multiple objects at once
return 0;
}