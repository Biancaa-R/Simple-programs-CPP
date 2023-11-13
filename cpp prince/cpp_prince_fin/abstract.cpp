//abstraction shapes example:
# include <iostream>
using namespace std;

class shape{
    public:
        virtual void draw_shape()=0;
};
class rectangle:public shape{
    public:
        void draw_shape(){
            cout<<"The shape of the figure is rectangle";
        }
};
class square:public shape{
    public:
        void draw_shape(){
            cout<<"The shape of the figure is square";
        }
};

int main()
{
    rectangle r1;
    r1.draw_shape();
    square s1;
    s1.draw_shape();
    return 0;
}