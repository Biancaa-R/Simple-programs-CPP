#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		int key;
		Node* next;
		
		Node(){
			data=0;
			key=0;
			next=NULL;
			//here key is the exponential
		}
		
		Node(int v,int k){
			data=v;
			key=k;
			next=NULL;
		}
};

class linked_list{

	public:
		Node* head;
		
		linked_list()
		{
			head=NULL;
		}
		linked_list(Node*n){
			head=n;
		}
		
		void Addition(linked_list &l2,linked_list&l3)
		{
			Node * ptr1=head;
			//polynomial1
			Node* ptr2=l2.head;
			//polynomial 2
			//linked_list l3();
			
	
			
			//ptr3=Node();
			while(ptr1!=NULL || ptr2!=NULL)
			{Node *newnode=Node();
			
			if(ptr1->next && ptr2->next){
				if(ptr1->key>ptr2->key)
				{
					ptr3->data=ptr1->data;
					ptr3->key=ptr1->key;
					ptr1=ptr1->next;
				}
				else if(ptr2->key>ptr1->key){
					ptr3->data=ptr2->data;
					ptr3->key=ptr2->key;
					ptr2=ptr2->next;
				}
				else if(ptr2->key==ptr1->key)
				{
					ptr3->data=ptr1->data+ptr2->data;
					ptr3->key=ptr1->key;
					ptr1=ptr1->next;
					ptr2=ptr2->next;
				}
				Node *n=new Node();
				ptr3->next=n;
				ptr=ptr->next;
			}
			
			if(ptr1->next){
				ptrr=ptr1;	
			}
			if(ptr2->next){
				ptrr=ptr2;
			}
			
			while(ptrr->next)
			{
				ptr3->data=ptrr->data;
				ptr3->key=ptrr->key;
				ptr3=ptr3->next;
				ptrr=ptrr->next;
			}
			ptr3->next=NULL;
			
			ptr3=ptr;
			while(ptr3!=NULL){
			cout<<ptr3->data;
			cout<<"\t";
		}
			
			//return ptr;
		}
		
		void Append_node(Node* n)
		{
			if(head==NULL){
				head=n;
			}
			else{
			
				Node* ptr=head;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				ptr->next=n;
				
			}
		}

};
int main()
{
	//lets add 5 nodes for simplicity to each linked_list
	linked_list l1;
	linked_list l2;
	linked_list l3;
	int v,k;
	
	
	for(int i=0;i<4;i++){
		cout<<"Contents of linked_list1\n";
		cout<<"Enter value";
		cin>>v;
		cout<<"Enter exponential";
		cin>>k;
		Node*n=new Node(v,k);
		l1.Append_node(n);
		
	}
	
	for(int i=0;i<4;i++){
		cout<<"Contents of linked_list2\n";
		cout<<"Enter value";
		cin>>v;
		cout<<"Enter exponential";
		cin>>k;
		Node*n=new Node(v,k);
		l2.Append_node(n);
		
	}
	
	//Node* result=new Node();
	
	l1.Addition(l2,l3);
	
	
	
}
