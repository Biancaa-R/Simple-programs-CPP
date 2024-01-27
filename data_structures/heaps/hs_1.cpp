//Heap sort

# include<iostream>
# include<algorithm>
using namespace std;

void swap(int &x, int&y){
    int temp=x;
    x=y;
    y=temp;
}

class heap_sort{
    public:
        void heapify(int arr[], int n, int i){
            int largest=i;
            int left= 2*i+1;
            int right =2*i+2;

            if(left<n && arr[left]>arr[largest]){
                largest=left;
            }
            if(right<n && arr[right]>arr[largest]){
                largest=right;
            }
            if(largest!=i){
                swap(arr[i],arr[largest]);
                heapify(arr,n,largest);
            }
        }
        void heapsort(int arr[],int n)
        {
            for(int i=n/2-1;i>=0;i--){
                heapify(arr,n,i);
            }
            for(int i=n-1;i>0;i--){
                swap(arr[0],arr[i]);
                //insanely important stupid thing
                heapify(arr,i,0);
            }
        }
};

int main()
{
int n;
cout<<"Enter the value of n";
cin>>n;
int * arr= new int[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
heap_sort h1;
h1.heapsort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}