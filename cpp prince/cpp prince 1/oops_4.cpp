# include <iostream>
using namespace std;

class rec{
    private:
        float len;
        float br;
    public:
        float area(float len,float br){
            float ar;
            ar=len*br;
            return ar;
        }
};

int main()
{
    float length,breadth,area;
    cout<<"Enter the length of the rectangle";
    cin>>length;
    cout<<"Enter the breadth of the rectangle";
    cin>>breadth;
    rec r1;
    area=r1.area(length,breadth);
    cout<<"The area of the rectangle is"<<area;
}