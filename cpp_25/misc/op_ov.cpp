//operator overloading"
# include <iostream>
using namespace std;

class operation{
    private:
        int value;
    public:
        operation(int v){
            value=v;
        }
        int operator * (operation obj2)
        {
            int result;
            result=value*obj2.value;
            return result;
        }
};

int main()
{
    operation obj1=operation(10);
    operation obj2=operation(20);
    int value;
    value=obj1 * obj2;
    cout<<value;
    return 0;
}