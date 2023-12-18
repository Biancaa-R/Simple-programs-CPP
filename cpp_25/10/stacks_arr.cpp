//Stack implementation using array data structure:

/*a. Write a C++ program to perform various Stack ADT operations using array implementation.

Operations

Stack – create an empty stack

~Stack – destroy an empty stack

Push – insert an element as top of the stack

Pop – remove the top element from the stack

Top – return the element at the top

IsEmpty – check whether stack is empty

IsFull – check whether the stack is full

Print –display all the elements of stack.*/

# include <iostream>
# include <stdbool.h>

using namespace std;

class Stack{
	public:
		int arr1[5];
		//setting a definite size
		int top;
		
		Stack()
		{
			top=-1;
			for(int i=0;i<5;i++){
				arr1[i]=0;
				//creation of an empty stack
			}
		}
		
		~Stack()
		{
			//clearing stack
		}
		
		bool isEmpty()
		{
			if(top==-1)	
			{
				return true;
			}
			else{
				return false;
			}
		}
		
		bool isFull()
		{
			if(top==4){
				return true;
			}
			else{
				return false;
			}
		}
		
		void push(int value){
			if(isFull()){
				cout<<"The stack is already full stack overflow\n";
			}
			else{
				top++;
				arr1[top]=value;
				cout<<"Element added successfully/n";
			}
		}
		
		int pop()
		{
			if(isEmpty()){
				cout<<"The stack is empty underflow\n";
				return -1;
			}
			else{
				int pop_value=arr1[top];
				arr1[top]=0;
				top--;
				return pop_value;
			}
		}
		
		int top_1(){
		//return elsement pointed at top
		if(isEmpty()){
			cout<<"The stack is empty underflow\n";
			return -1;
		}
		else{
			return arr1[top];
		}
		}
		int count()
		{
			//count all elements present in stack:
			int sum=0;
			if(isEmpty()){
				cout<<"The stack is empty";
				//return sum;
			}
			else{
				for(int i=0;i<=top;i++){
					sum+=arr1[i];
				}
				return sum;
			}
		}
		
		void display()
		{
			for(int i=0;i<=top;i++){
				cout<<arr1[i]<<"\t";
			}
			cout<<"\n";
		}
};

int main()
{
	//menu driven program:
	cout<<"---------------------------------------------------------\n";
	cout<<"stack operations\n";
	cout<<"----------------------------------------------------------\n";
	cout<<"1.isEmpty()\n";
	cout<<"2.isFull()\n";
	cout<<"3.push()\n";
	cout<<"4.pop()\n";
	cout<<"5.count()\n";
	cout<<"6.display()\n";
	cout<<"7.top\n";
	cout<<"8.break\n";
	
	int choice;

	Stack s1;
	int value;
	while (true){
		
			cout<<"Enter your choice number\n";
			cin>>choice;
			
			if(choice==8){
				break;
			}
		
		switch(choice){
			case (1):
				
				if (s1.isEmpty()){
					cout<<"The stack is empty";
				}
				else{
					cout<<"The stack is not empty\n";
				}
				break;
			case(2):

				if (s1.isFull()==true){
				
					cout<<"The stack is full";
				}
				else{
					cout<<"The stack is not full\n";
				}
				break;
			case (3):
				//pushing values in a stack

				cout<<"Enter the input value\n";
				cin>>value;
				s1.push(value);
				break;
			case(4):
				//int value;
				//gives redeclaration of int value even when both are in separate cases meh
				value=s1.pop();
				cout<<"The popped value is"<<value<<"\n";
				break;
				
			case(5):
				int count;
				count=s1.count();
				cout<<"The count of all elements present in the stack is"<<count<<"\n";
				break;
				
			case(6):
				s1.display();
				break;
				
			case(7):
				value=s1.top_1();
				cout<<"The value present at the top of the stack is"<<value<<"\n";
				break;
								
	}
			
	}
}
