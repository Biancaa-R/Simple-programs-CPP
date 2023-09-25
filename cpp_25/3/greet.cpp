//c. Read first name and last name from the user and display the name as output.
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	string name,name2;
	string arr[5]={"hi","hello","greetings","hola","hey"};
	// Providing a seed value
	srand((unsigned) time(NULL));
	// Offset = -1
	// Range = 6
	int random = -1 + (rand() % 6);
	//cout<<random;

	
	//getting name as input
	cout<<"Enter your full name separated by space";
	cin>>name;
	cin.ignore();
	cin>>name2;
	cout<<arr[random]<<"\t";
	cout<<name<<"\t"<<name2;
	return 1;
	
}
