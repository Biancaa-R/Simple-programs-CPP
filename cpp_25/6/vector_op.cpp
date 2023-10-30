//d. Perform all operations like dot and cross product in a Vector class. 
//V = Xi + Yj + Zk Where, X, Y and Z are the magnitude of the vector V in the directions i , j and k respectively

# include <iostream>
using namespace std;

class vector{
	private:
		int x,y,z;
		int a ,b,c;
		int val1,val2,val3;
	public:
		vector(){
			cout<<"Enter the x value";
			cin>>x;
			cout<<"Enter the y value";
			cin>>y;
			cout<<"Enter the z value";
			cin>>z;
		}
		void crossprod(){
			cout<<"Enter the coordinates of 2 nd vector\n";
			cout<<"Enter the a value";
			cin>>a;
			cout<<"Enter the b value";
			cin>>b;
			cout<<"Enter the c value";
			cin>>c;
			val1=(y*c)-(z*b);
			val2=-((x*c)-(a*z));
			val3=(x*b)-(a*y);
			cout<<val1<<"i +"<<val2<<"j +"<<val3<<"k";
			cout<<"\n";
		}
		void dotprod()
		{	
			cout<<"dot product";
			cout<<"Enter the coordinates of 2 nd vector\n";
			cout<<"Enter the a value";
			cin>>a;
			cout<<"Enter the b value";
			cin>>b;
			cout<<"Enter the c value";
			cin>>c;
			val1=a*x;
			val2=b*y;
			val3=c*z;
			cout<<val1+val2+val3;		
			cout<<"\n";
		}
};

int main()
{
	vector v1;
	v1.crossprod();
	v1.dotprod();
}
