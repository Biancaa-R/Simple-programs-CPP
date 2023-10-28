// Area perimeter of a circle using classes

# include<iostream>
using namespace std;

class circle{
    private:
        float radius;
    public:
        float area(float radius){
            float ar;
            ar=3.14*3.14*radius;
            return ar;
        }
        float peri(float radius){
            float pr;
            pr=2*3.14*radius;
            return pr;
        }
        void display(float radius){
            float ar,pr;
            ar=area(radius);
            pr=peri(radius);
            cout<<"The value of area is "<<ar<<"\n";
            cout<<"The value of perimeter is "<<pr<<"\n";
        }
};

int main()
{
    float radius;
    cout<<"Enter the value of radius";
    cin>>radius;
    circle c1;
    c1.display(radius);
}