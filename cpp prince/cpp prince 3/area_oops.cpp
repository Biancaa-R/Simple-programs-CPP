//Write a program to print area of rectangle by creating a class area ,taking length,breadth as parameters of its constructor and method return area which returns the area of the rectangle

# include <iostream>
using namespace std;

class area{
    private:
        float len,br;
    public:
        float ar;
        area(float x,float y){

            len=x;
            br=y;
            ar=returnArea();
        }
        float returnArea(){
            float area;
            area=len*br;
            return area;
        }
};

int main(){
    float x,y;
    cout<<"Enter the length of the rectangle";
    cin>>x;
    cout<<"Enter the breadth of the rectangle";
    cin>>y;
    float ar;
    area obj1= area(x,y);
    ar=obj1.ar;
    cout<<"The area of the rectangle is "<<ar;
    return 0;
}