# include <iostream>
using namespace std;

int main()
{
    int i,j,key,n;
    cout<<"Enter the length of the array\n";
    cin>>n;
    int *arr1=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element\n";
        cin>>arr1[i];
    }

    for(int i=1;i<n;i++){
        key=arr1[i];
        j=i-1;
        while(j>=0 && arr1[j]>key){
            arr1[j+1]=arr1[j];
            j=j-1;
        }
        arr1[j+1]=key;
    }

    for(int i=0;i<n;i++){
        cout<<arr1[i]<<"\t";
    }
}