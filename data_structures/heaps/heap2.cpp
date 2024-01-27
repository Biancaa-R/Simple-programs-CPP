//min heap:

# include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

class Minheap{
    public:
        int *arr1;
        int capacity;
        int heap_size;

        Minheap(int cap){
            capacity=cap;
            heap_size=0;
            int* arr1=new int[cap];
        }

        int left(int i){
            return 2*i+1;
        }

        int parent(int i){
            return (i-1)/2;
        }

        int right(int i){
            return 2*i+2;
        }

        void MinHeapify(int i){
            int smallest=i;
            int l=left(i);
            int r= right(i);

            if(l<heap_size && arr1[l]<arr1[i]){
                smallest=l;
            }
            if(l<heap_size && arr1[r]<arr1[i]){
                smallest=r;
            }
            if(smallest!=i){
                //changeuu
                swap(arr1[i],arr1[smallest]);
                MinHeapify(smallest);
            }

        }

        int extractmin()
        {
            if (heap_size==0){
                return INT16_MAX;
            }
            if(heap_size==1){
                heap_size--;
                return arr1[0];
            }
            int min=arr1[0];
            arr1[0]=arr1[heap_size-1];
            heap_size--;
            MinHeapify(0);
            return min;
        }
        void insertkey(int k){
            if(heap_size==capacity){
                cout<<"heap overflow\n";
                return;
            }
            heap_size++;
            int i= heap_size-1;
            arr1[heap_size-1]=k;
            //to check for violation
            while(i!=0 && arr1[parent(i)]>arr1[i]){
                swap(arr1[i],arr1[parent(i)]);
                i=parent(i);
            }
        }

        void decreaseKey(int i,int value){
            arr1[i]=value;
            while(i>0 && arr1[parent(i)]>arr1[i]){
                swap(arr1[i],arr1[parent(i)]);
                i=parent(i);
            }
        }

        void deleteKey(int i){
            decreaseKey(i,INT16_MIN);
            extractmin();
        }
};

int main()
{
    int n;
    int k;
    cout<<"Enter the maximum capacity of the min heap";
    cin>>n;
    //lets have a fixed 5 valued heap
    Minheap h1(n);

    for(int i=0;i<5;i++){
        cout<<"Enter the value to insert";
        cin>>k;
        h1.insertkey(k);
    }
    cout<<"Keys inserted successfully\n";

    int v=h1.extractmin();
    cout<<"The minimum value is"<<v<<"\n";

    for(int i=0;i<h1.heap_size;i++){
        cout<<h1.arr1[i]<<"\t";
    }
    //avlo dhan 
}