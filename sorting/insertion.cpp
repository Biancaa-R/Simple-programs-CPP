# include <iostream>
using namespace std;

int main()
{
    //declaration of the variables:
    int i,j,key,n;
    cout<<"Enter the number of elements in the array\n";
    cin>>n;
    int * arr1= new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element ["<<i<<"]";
        cin>>arr1[i];
    }
    //we got the array now;
    for(i=1;i<n;i++){
        key=arr1[i];
        j=i-1;
        //the highest possible vlue j guy can take
        while(j>=0 && arr1[j]>key){
            arr1[j+1]=arr1[j];
            j=j-1;
        }

        arr1[j+1]=key;
    }
    //print the array:
    for (i=0;i<n;i++){
        cout<<arr1[i]<<"\t";
    }
}