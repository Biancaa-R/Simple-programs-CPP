# include <iostream>
using namespace std;

void merge(int arr[],int l,int m,int r){
    //compare,add to a temporary array;
    int i=l;
    int j=m+1;
    int k= l;
    int size= r-l+1;
    int* temp= new int[size];
    //start of the array temp
    while(l<=m && j<=r){
        //if both of them exist
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            k++;
            i++;
        }

        else if(arr[j]<arr[i]){
            temp[k]=arr[j];
            k++;
            j++;
        }
    }

    while(i<=m){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=r){
        temp[k]=arr[j];
        k++;
        j++;
    }

    //adding the temp value back:
    for(int s=l;s<=r;s++){
        arr[s]=temp[s];

    }
}
void mergesort(int arr[],int l,int r){
    if(l<r){
        //to check if the smaller sub array has only 1 element
        int m= (l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int* arr1= new int[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the element ["<<i<<"]";
        cin>>arr1[i];
    }
    mergesort(arr1,0,size-1);

    for(int i=0;i<size;i++){
        cout<<arr1[i]<<"\t";
    }
    
}