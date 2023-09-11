//Print the sum of series
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int terms;
    double add,final;
    final=0;
	cout<<"Enter the number of terms";
	cin>>terms;
	//for the depiction
	for (int i=1;i<=terms;i++){
		cout<<"(1/"<<i<<")^2 +"<<"\t";
	}
    //for the final value
	for(float i=1;i<=terms;i++){
		add=sqrt(1/i);
        final=final+add;
        cout<<add<<"+";
	}
    //Important thing if i in the loop is int then 1/i will be o.something =0 as a int
    //so declare the i element of loop as float

    cout<<"\t = "<<final;
    return 0;
}