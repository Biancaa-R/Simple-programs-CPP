/*a. Write a C++ program to perform various Queue ADT operations using array.

Operations

Queue – create an empty queue

~Queue – destroy an empty queue

IsEmpty - returns true if queue is empty, false otherwise

IsFull - returns true if queue is full, false otherwise

Enqueue - add an element to the rear of queue 

Dequeue - delete the element at the front of queue

DisplayQueue - print all the data*/

# include<iostream>
# include<stdbool.h>

using namespace std;

class Queue{
    public:
        int value;
        int arr1[5];
        int start;
        int stop;

        Queue()
        {
            value=0;
            for(int i=0;i<5;i++){
                arr1[i]=0;
            }
            start=-1;
            stop=-1;
        }
        ~Queue(){
            //destructor for class queue
        }

        bool isEmpty()
        {
            if(start==-1&& stop==-1){
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull()
        {
            if (start==0 && stop==4){
                return true;
            }
            else{
                return false;
            }
        }

        void Enqueue(int value)
        {
            if(isFull()==false){
                if(start==-1 && stop ==-1){
                    start=0;
                    stop=0;
                    arr1[start]=value;
                    //adding the first element
                }
                else{
                    stop++;
                    arr1[stop]=value;
                }
            }
        
            else{
                cout<<"The queue is full\n";
            }
        }

        int Dequeue()
        {
            if(isEmpty()==true){
                cout<<"The queue is empty underflow\n";
            }
            else if(start==0 && stop==0){
                int pop_item=arr1[start];
                arr1[start]=0;
                start=-1;
                stop=-1;
                return pop_item;
            }
            else{
                //removal from start:
                int pop_item=arr1[start];
                arr1[start]=0;
                start++;
                return pop_item;
                }
        }

        void display()
        {
            for(int i=start;i<=stop;i++)
            {
                cout<<arr1[i]<<"\t";
            }
        }

};

int main()
{
    //menu driven program:
	cout<<"---------------------------------------------------------\n";
	cout<<"Queue operations\n";
	cout<<"----------------------------------------------------------\n";
	cout<<"1.isEmpty()\n";
	cout<<"2.isFull()\n";
    cout<<"3.Enqueue()\n";
	cout<<"4.display()\n";
	cout<<"5.Dequeue()\n";
	cout<<"6.break\n";
	
	int choice;

	Queue q1;
	int value;
	while (true){
		
			cout<<"Enter your choice number\n";
			cin>>choice;
			
			if(choice==6){
				break;
			}
		
		switch(choice){
			case (1):
				
				if (q1.isEmpty()){
					cout<<"The queue is empty";
				}
				else{
					cout<<"The queue is not empty\n";
				}
				break;
			case(2):

				if (q1.isFull()==true){
				
					cout<<"The queue is full";
				}
				else{
					cout<<"The queue is not full\n";
				}
				break;
			case (3):
				//pushing values in a queue

				cout<<"Enter the input value\n";
				cin>>value;
				q1.Enqueue(value);
				break;
			case(5):
				//int value;
				//gives redeclaration of int value even when both are in separate cases meh
				value=q1.Dequeue();
				cout<<"The popped value is"<<value<<"\n";
				break;

			case(4):
				q1.display();
				break;
								
	}
			
	}
}