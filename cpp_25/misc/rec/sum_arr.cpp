//1. Write a C++ program to find the sum of all elements in an array using recursion.

# include <iostream>
using namespace std;
int sum(int param[],int n1,int sum1){
    //int sum1;
    /*for (int i=0;i<n1;i++){
        sum1+=param[i];
    }
    this is done using loops now with rec*/
    if (n1>0){
        sum1=param[n1-1];
        cout<<sum1<<"\t";
        return (sum1+ sum(param,n1-1,sum1));
        }
    else{
        return 0;
    }

}
int main(){
    int n1;
    cout<<"Enter the number of elements in array";
    cin>>n1;
    
    int * arr1 = new int [n1];
 
    //int arr1 [n1];
    for(int i=0;i<n1;i++){
        cout<<"Enter the element \t";
        cin>>arr1[i];
    }
    //for calculating sum:
    int sum1= sum(arr1,n1,0);
    cout<<"The sum is"<<sum1;

}