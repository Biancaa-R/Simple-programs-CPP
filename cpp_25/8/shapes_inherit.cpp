//shape:
//sphere
//cylinder
//squares

# include <iostream>
using namespace std;

class shape{

    public:

    void prints()
    {
        cout<<"This is a shape\n";
    }

};

class sphere: public shape{

    public:

    void print_sphere()
    {
        cout<<"This is a sphere \n";
    }
};

class cylinder : public shape{

    public:

    void print_cylinder()
    {
        cout<<"This is a cylinder\n";
    }
};

class squares: public shape{

    public:

    void print_square()
    {
        cout<<"This is a square\n";
    }
};

int main()
{
    sphere s1;
    s1.prints();
    s1.print_sphere();

    cylinder c1;
    c1.prints();
    c1.print_cylinder();

    squares s2;
    s2.prints();
    s2.print_square();

}