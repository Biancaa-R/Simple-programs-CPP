//Program using linear search:
# include <iostream>
using namespace std;
int search(int arr[],int x){
    //To find the length of the array
    int len;
    len= sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<len;++i){
        if (arr[i]==x){
            break;
            return i;
        }
        else{
            continue;
        }
        
    }
    return -1;
 
}
int main(){
    int x,len;
    
    int value;
    cout<<"Enter the length of array";
    cin>>len;
    int *arr = new int[len];
    // the compiler must know the amount of memory
    // to allocate for an array at compile time. However, the size of a variable is unknown until runtime. 
    //Therefore int arr[variable] ; doesnt work
    for(int i=0;i<len;i++){
        cout<<"Enter the element";
        cin>>arr[i];
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<"\n";
    }
    cout<<"Enter the element to be found";
    cin>>x;
    value=(search(arr,x));
  
    cout<<"The index is "<<value;

    return 0;

}