//Write a class shape that has Circle/Square/Rectangle/Triangle/cube/cuboid fields as the necessary parameters.
// Keep methods to assign default values. Include appropriate overloaded methods 
//to the class and calculate the area/perimeter/volume of the given shape.

# include <iostream>
# include <math.h>
using namespace std;

class shape{
	private:
		int num;
	public:
		float area(float rad){
            float ar;
            ar=3.14*rad*rad;
            return ar;
        }
        float area(float s1,float s2){
            float ar;
            //square is a subset of rectangle
            ar=s1*s2;
            return ar;
        }
        float area(float s1, float s2, float s3){
            float ar;
            float s;
            s=(s1+s2+s3)/2;
            ar=sqrt(s*(s-s1)*(s-s2)*(s-s3));
            return ar;
        }
        float volume(float rad){
            float vol;
            vol=(4/3)*3.14*rad*rad*rad;
            return vol;
        }
        float volume(float s1,float s2,float s3){
            float vol;
            vol=s1*s2*s3;
            return vol;
        }
        float volume(float s1,float s2, int h1){
            float vol;
            vol=(s1*s2*h1)/3;
            return vol;
        }
};

int main()
{
    int choice ;
	cout<<"Select the shape to perform operation circle,square,rectangle,Triangle,cube,cuboid,sphere,pyramid";
	cin>>choice;
    shape obj1;
	switch(choice){
		case 1:
            float rad,ar;
			cout<<"circle";
            cout<<"Enter the value of radius";
            cin>>rad;
            ar=obj1.area(rad);
            cout<<"The area of the circle is"<<ar;
            break;

		case 2:
			cout<<"square";
            float s1,s2;
            cout<<"Enter the values of s1,s2";
            cin>>s1;
            cin.ignore();
            cin>>s2;
            ar=obj1.area(s1,s2);
            cout<<"The area of the square is"<<ar;
            break;
        case 3:
            cout<<"rectangle";
            //float s1,s2;
            cout<<"Enter the values of s1,s2";
            cin>>s1;
            cin.ignore();
            cin>>s2;
            ar=obj1.area(s1,s2);
            cout<<"The area of the rect is"<<ar;
            break;
        case 4:
            cout<<"Triangle";
            cout<<"Enter the values of s1,s2 s3";
            //float s1,s2,
            float s3;
            cin>>s1;
            cin.ignore();
            cin>>s2;
            cin.ignore();
            cin>>s3;
            ar=obj1.area(s1,s2,s3);
            cout<<"The area of the triangle is"<<ar;
            break;
        case 5:
            cout<<"cube";
            //float s1,s2,s3;
            float vol;
            cout<<"Enter the values of s1,s2 s3";
            cin>>s1;
            cin.ignore();
            cin>>s2;
            cin.ignore();
            cin>>s3;
            vol=obj1.volume(s1,s2,s3);
            cout<<"The volume of the cuboid is"<<vol;
            break;
        case 6:
            cout<<"cuboid";
            //float s1,s2,s3;
            //float vol;
            cout<<"Enter the values of s1,s2 s3";
            cin>>s1;
            cin.ignore();
            cin>>s2;
            cin.ignore();
            cin>>s3;
            vol=obj1.volume(s1,s2,s3);
            cout<<"The volume of the cube is"<<vol;
            break;
        case 7:
            cout<<"sphere";
            //float rad,vol;
            cout<<"Enter the value of radius";
            cin>>rad;
            vol=obj1.volume(rad);
            cout<<"The volume of the sphere is"<<vol;
            break;

        case 8:
            cout<<"Pyramid";
            //float s1,s2;
            int h1;
            //float vol;
            cout<<"Enter the values of s1,s2 s3";
            cin>>s1;
            cin.ignore();
            cin>>s2;
            cin.ignore();
            cin>>h1;
            vol=obj1.volume(s1,s2,h1);
            cout<<"The volume of pyramid is"<<vol;
            break;

		
	}
    return 0;
}