#include<iostream>
using namespace std;

int fact(int k) {
        if (k>0){
            return (k* fact(k-1));
        }
        else if( k==0){
            return (1);
        }
    }

    //The function is always defined out of the main function:

int main(){

    int num;
    int result;
   
    cout <<"Enter the number to find factorial";
    cin>>num;
    result =fact(num);
    cout<<result;

}