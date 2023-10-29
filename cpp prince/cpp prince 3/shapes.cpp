//Create a class shape with a method to print This is This is shape.
//and create 2 other classes rectangle,circle inheriting the shape class ,both having a method to print this is rectangular shape,this is circular shpe
//create a subclass square of rectangle.. can the funcs of rec,shape with square
//square is rectangle

# include <iostream>
using namespace std;

class shape{
    private:
        string this1="This is";
        //by putting this in priv we can give other values of this variable
    public:
        void display_shape(){
            cout<<"This is"<<this1<<"shape";
        }
};

class rectangle:public shape{
    private:
        string this1="Rectangular";
    public:
        void rect(){
            cout<<this1<<"is a rectangle";
        }
};

class circle:public shape{
    private:
        string this1="Circular";
};

class square:public rectangle{
    private:
        
        string this1="Square";
};

int main()
{
    cout<<"Creating the shape obj\n";
    shape obj1;
    obj1.display_shape();

    cout<<"Creating the rect shape obj\n";
    rectangle obj2;
    obj2.display_shape();

    cout<<"Creating the circle shape obj\n";
    circle obj3;
    obj3.display_shape();

    cout<<"Creating the square obj \n";
    square obj4;
    obj4.display_shape();
    obj4.rect();

    return 0;
}