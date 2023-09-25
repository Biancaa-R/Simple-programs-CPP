/*b. To print the following pattern [Iterative]

*          *          *          *          *

            *          *          *

                        * */

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number of lines of pattern";
	cin>>num;
	int epsilon=0;
	
	for(int i=0;i<num;i++){
		//for printing the spaces
		for (int j=0;j<i;j++){
			cout<<"\t";
		}
		//for printing the pattern
		epsilon=((num-i-1)*2+1);
		for(int i=0;i<epsilon;i++){
			cout<<"*\t";
		}
		cout<<"\n";
		
	}


	
	
}	
