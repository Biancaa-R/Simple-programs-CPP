/*4. a. Write a program to get the following result.

Expected output for vectors:

Enter the initial size: 5
Original Vector Contents: 0     1       2       3       4
Data at Position 4: 4
Push 12:
0       1       2       3       4       12
Insert -1 at the beginning
-1      0       1       2       3       4       12
Insert data 40 Index 4
-1      0       1       2       40      3       4       12
Erase data at position 2:
-1      0       2       40      3       4       12
Status 1 for empty is true ie. Empty, 0-empty is false ie. Not empty
0
After using clear command:
1*/

# include <iostream>
# include <vector>
using namespace std;
int main()
{
	int num,in,val;
	cout<<"Enter the number of elements";
	cin>>num;
	vector <int> vec(num);
	for (int i=0;i<num;i++)
	{
		vec.at(i)=i;
	}
	cout<<"original vector contents";
	for (int x: vec){
		cout<<x<<"\t";
	}
	cout<<"Enter index to view content/n";
	cin>>in;
	cout<<vec.at(in)<<"is the element present";
	cout<<"Enter the element to push back";
	cin>>val;
	vec.push_back(val);
	//displaying the modified vec
	for(int x:vec){
		cout<< x<<"\t";
	}
	cout<<"Enter the index to insert";
	cin>>in;
	cout<<"Enter the value";
	cin>>val;
	vec.insert(vec.begin()+in,val);
	
	//displaying the modified vec
	for(int x:vec){
		cout<< x<<"\t";
	}
	
	//for erasing data <3
	cout<<"Enter the index to erase data";
	cin>>in;
	for(int i=0;i<vec.size();i++){
		if(i<in){
			vec[i]=vec[i];
		}
		else{
			vec[i]=vec[i+1];
			//there are 2 trailing zeros as 1--> shifted 0, 2 vec(end)=vec(vec+1)which saves the value 0
		}
	}
	//displaying the modified vec
	for(int x:vec){
		cout<< x<<"\t";
	}
	
	//command to check if vector is empty
	val=vec.empty()	;
	cout<<val;
	
	//command to clear vector
	cout<<"Do you want to clear vector 1/0";
	cin>>in;
	if(in==1){
		vec.clear();
		cout<<"Vector is cleared 1";
	}
	else if (in==0){
		cout<<"Vector is intact";
		//displaying the modified vec
		for(int x:vec){
			cout<< x<<"\t";
	}
	}
	
}
