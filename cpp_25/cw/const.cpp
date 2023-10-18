//const explicit,implicit calls:
# include <iostream>
using namespace std;
class sample
{
    int x,y;
    public:
    sample(int x ,int y);
    void display();

};
sample::sample(int a,int b)
{
    x=a;
    y=b;
    //setting the values
}

void sample::display()
{
    cout<<"The value of first variable is"<<x<<endl;
    cout<<"The value of second variable is"<<y<<endl;
}

int main()
{
    sample obj(2,3);
    obj.display();
    //implicit

    sample obj2=sample(3,4);
    obj2.display();

    return 0;
}