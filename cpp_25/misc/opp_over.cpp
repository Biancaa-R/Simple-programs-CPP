#include <iostream>
using namespace std;
class Matrix
{
 int Element [3][3];
public:
 Matrix () {};
 Matrix (int TempMatrix[3][3])
 {
 for (int i=0; i<3; i++)
 for (int j=0; j< 3; j++)
 Element[i][j]=TempMatrix[i][j];

 }
 void read ()
 {
 for (int i=0; i<3; i++)
 for (int j=0; j< 3; j++)
 cin >> Element[i][j];
 }
 /*void operator - ()
 {
 for (int i=0; i<3; i++)
 for (int j=0; j< 3; j++)
 Element[i][j]= - Element[i][j];
 }*/

void operator - ()
 {
 for (int i=0; i<3; i++)
 for (int j=0; j< 3; j++)
 Element[i][j]=  -Element[i][j];
 //non static memeber function therefore we cant give input parameters unary
 //in case of binary the member objects are the parameters
 
 }
 void display ()
 {
 for (int i=0; i<3; i++)
 for (int j=0; j< 3; j++)
 cout << Element[i][j] << "\n";
 }
};
int main ()
{
 int ArrayOfInt[] [3]={1,2,3,4,5,6,7,8,9};
    string x="hi";
 Matrix M1(ArrayOfInt);
 cout <<"First Matrix before negation \n";
 M1.display();
 cout << "First Matrix after negation \n";
//-M1; // Unary Operator Overloading is called here.

 M1.display();
 -M1; //no paranthesis AT all!

 Matrix M2;

 cout <<"Read the values for second matrix \n";
 M2.read();
cout << " Second Matrix before negation \n";
 M2.display();
 cout << "Second Matrix after negation \n";
//-M2; // Unary Operator Overloading is called here.

 M2.display();
} 
