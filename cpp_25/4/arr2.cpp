/*3. "Program to demonstrate Arrays"

Expected Output: 
String array
Enter the size of the 1D string array: 5
Enter contents for [0] = Lion
Enter contents for [1] = Tiger
Enter contents for [2] = Kangaroo
Enter contents for [3] = Jackal
Enter contents for [4] = Cheetah

Displaying the string array contents as follows....
Lion
Tiger
Kangaroo
Jackal
Cheetah

Trying to modify string array contents....
Enter the position of modification in the string array
4

Enter the new value: Bear
Modified array contents as follows....
Lion
Tiger
Kangaroo
Jackal
Bear*/

#include<iostream>
using namespace std;
int main(){
	int len;
	cout<<"Enter the length of the 1d array";
	cin>>len;
	string arr[len];
	for(int i=0;i<len;i++){
		cout<<"Enter the "<<i<<"th element";
		cin>>arr[i]; 
		
	}
	//cout<<arr; gives the address of the first element of the array 
	for (int i=0;i<len;i++){
		cout<<arr[i]<<"\n";
	}
	int num;
	string element;
	cout<<"Enter the new index for modification";
	cin>>num;
	cout<<"Enter the new element";
	cin>>element;
	arr[num]=element;
	cout<<"The modified array is\n";
	for (int i=0;i<len;i++){
		cout<<arr[i]<<"\n";
	}
}
