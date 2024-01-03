# include <iostream>
# include <stdbool.h>
# include <math.h>

using namespace std;

class MinHeap{
    public:

    int * arr;
    int capacity;
    int heap_size;

    MinHeap(int cap){
        heap_size=0;
        capacity=cap;
        arr=new int [cap];
    }

    int linear_search(int k){
        for (int i=0;i<heap_size;i++){
            if (arr[i]==k){
                return i;
            }
        }
        return -1;
    }

    void linear_print()
    {
        for(int i=0;i<heap_size;i++){
            cout<<arr[i]<<"\t";
        }
    }

    int height()
    {
        return ceil(log2 (heap_size+1))-1;
    }

    int parent(int i)
    {
        return ((i) / 2)-1 ;
    }

    /*void insert (int k){
        if(heap_size==capacity){
            cout<<"Heap overflow\n";
            return;
        }
        else{
            heap_size+=1;
            int i= heap_size-1;
            arr[i]=k;
            int tmp;
            //setting the last value with new element
            //int par=parent(i);
            int par=0;
            while(i>0 && arr[i]<arr[parent(i)]){
                tmp=arr[i];
                par=parent(i);
                arr[i]=arr[par];
                arr[par]=tmp;
                i=par;
                //par=parent(i);
            }

            while(i>0 ){
                int tmp;
                if(arr[i]<par){
                    tmp=arr[i];
                    arr[i]=arr[par];
                    arr[par]=tmp;
                    i=par;
                    par=parent(i);
                }
                else{
                    break;
                }
            }

        }
    }*/

void insert(int k) {
    if (heap_size == capacity) {
        cout << "Heap overflow\n";
        return;
    } else {
        heap_size += 1;
        int i = heap_size - 1;
        arr[i] = k;
        int tmp;

        while (i !=0 && arr[i] < arr[parent(i)]) {
            int par = parent(i);
            tmp = arr[i];
            arr[i] = arr[par];
            arr[par] = tmp;
            i = par;
        }
    }
}



};

int main()
{
    int choice;
    int value;
    MinHeap h1(5);
    while (true)
    {
        cout<<"Enter the choice input";
        cin>>choice;
        if (choice==0){
            break;
        }
        switch(choice){
            case(1):
                cout<<"Display the heap array\n";
                h1.linear_print();
                break;

            case(2):
                cout<<"Height of the tree is"<<h1.height();
                break;
            case(3):
                cout<<"Enter the element to be searched";
                cin>>value;
                value=h1.linear_search(value);
                if (value!=-1){
                    cout<<"The value is found at index"<<value;
                }
                else{
                    cout<<"Element not found\n";
                }
                break;

            case(4):
                cout<<"Insertion\n";
                cout<<"Enter the element to be inserted";
                cin>>value;
                h1.insert(value);
                cout<<"Value inserted successfully\n";
                break;

        }
    }
}