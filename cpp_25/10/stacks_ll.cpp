/*b. Write a C++ program to perform various Stack ADT operations using Linked List implementation.

Operations

Stack – create an empty stack

~Stack – destroy the memory of stack

Push – allows adding an element at the top of the stack

Pop – allows removing an element from the top of the stack

Top – return the element at the top

Print –display all the elements of stack*/

# include <iostream>
# include <stdbool.h>

using namespace std;

class Node{
	public:
		int value;
		//int key; we dont need this
		Node* next;
		
		Node(){
			value=0;
			next=NULL;
		}
		Node(int v){
			value=v;
			next=NULL
		}
	
};

class Stack{
	public:
		int top;
		Node* head;
		
		Stack()
		{
			top=-1;
			head=NULL;
		}
		Stack(Node*n)
		{
			top=0;
			head=n;
		}
		
		~Stack()
		{
			//clearing stack
		}
		
		bool isEmpty()
		{
			if(top==-1 & head==NULL)	
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
		
		void push(Node *n){
			if(isFull()){
				cout<<"The stack is already full stack overflow\n";
			}
			else{
				top++;
				if(head==NULL){
					//newnode
					head=n;
				}
				else{
				
					Node* ptr=head;
					while(ptr->next!=NULL){
						ptr=ptr->next;
					}
					ptr->next=n;
				}
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
				//check if only one node:
				if(top==0){
					head=	NULL;
					top=-1;
					return head->value;
				}
				
				else{
					
					Node* ptr=head->next;
					Node* ptr_minus=head;
					while(ptr->next!=NULL){
						ptr=ptr->next;
						ptr_minus=ptr_minus->next;
					}
					int pop_value=ptr->value;
					//deletion of node:
					
					top--;
					return pop_value;
				}
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
