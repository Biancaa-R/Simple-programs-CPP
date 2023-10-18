#include <iostream>
#include <vector>
using std::vector;
using std::endl;
using std::cout;
void reset(int *ip)
{
*ip = 0; // changes the value of the object to which ip points
ip=0; // changes only the local value of ip; the argument is unchanged

}
int main()
{
int i = 42;
int *p = &i;
cout << "i: " << *p << '\n'; // prints i: 42
reset(p); // changes *p but not p
cout << "i: " << *p << endl; // ok: prints i: 0
return 0;
}
