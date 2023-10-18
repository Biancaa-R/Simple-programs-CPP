//constant memeber functions:
# include <iostream>
using namespace std;
class month{
    public:
    string month1;
    month();
    void display() const;
    //it doesnot vary any value
};
month::month()
{
    cout<<"Enter the month to print";
    cin>>month1;
}
void month::display() const
{
    cout<<month1<<"Slipped away like a bottle of wine";
}
int main()
{
    month obj;
    obj.display();
}