//circle values:
#include<iostream>
using namespace std;
int main(){
	int rad;
	float area,peri;
	const float pi=3.1415926;
	cout<<"Enter the input radius";
	cin>>rad;
	area=pi*rad*rad;
	peri=2*pi*rad;
	cout<<"The area of the circle is"<<area<<"\n";
	cout<<"The perimeter of the circle is"<<peri<<"\n";
	return 0;
	//after the return whatever we write will not be printed
	cout<<"bla bla";
	}
