//Program using linear search:
# include <iostream>
using namespace std;
int search(int arr[],int x){
    //To find the length of the array
    int len;
    int found=0;
    len= sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<len;++i){
        if (arr[i]==x){
            found=1;
            break;
            return i;
        }
        else{
            continue;
        }
        
    }
    if (found==0){
        return -1;
    }
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
    if (value==-1){
        cout<<"The elemnent was not found";
    }
    else{
        cout<<"The index is "<<value;
    }

    return 0;

}