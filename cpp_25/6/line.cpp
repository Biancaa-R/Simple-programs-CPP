/*c.      Create a class named line and declare a constructor and destructor. The definitions are to kept outside with a simple message in it. Keep the member functions as follows.

i.          void setLength(double len ) - Assigns length of a line

ii.          double getLength( void )- Returns the length of a line

Note: Place all member functions, constructor and destructor definitions outside the class.*/

# include <iostream>
# include <string>
using namespace std;

class line{
	private:
	string line_op="Take a walk in the park when you feel down, there are so many things that's gonna lift you up\n";
	//wth is a line here
	public:
		line();
		void setLength(double len);
		double getLength(void);
		
};

line::line()
	{
	line_op=line_op;
	cout<<line_op;
	//value set
	}
void line::setLength(double len){
	line_op.resize(len);
	cout<<"Length changed successfully\n";
	cout<<line_op;
	}
double line::getLength(void){
	
	double len;
	len=(line_op.length());
	return len;
}

int main(){
	
	cout<<"The initial length of the string is\n";
	line obj;
	double len;
	len=obj.getLength();
	cout<<len;
	cout<<"Enter the new length of the string\n";
	cin>>len;
	obj.setLength(len);
	cout<<"The final length of the string is\n";	
	len=obj.getLength();
	cout<<len;	
}
