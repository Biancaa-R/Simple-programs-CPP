/*b.     Write a C++ program to implement List ADT using linked list.

Operations

MakeEmpty

Initializes list to empty state.

GetLength

                        Determines number of elements in list.

GetNextItem

                        Gets the next element in list.

InsertNode

                        Get the element and its position to be inserted into the list.

                        Allocate the memory for new element.

Insert the element in the list at given position(either beginning/middle/end).

FindKth

                        Get the position.

                        Returns the element at the required position.

Find

                        Get the element.

                        Returns the position of the element.

DeleteNode

Get the data to be deleted in the list.

Locate the node that contains data to be deleted.

Release the memory occupied by that node.

PrintList*/

//Key concept is also used to uniquely identify the node 

# include <iostream>
# include <stdbool.h>
using namespace std;

class Node
{
	public:
		int value;
		int key;
		Node * next;
		
		Node(){
			value=0;
			key=0;
			next=NULL;
		}
		Node(int v,int k){
			value=k;
			key=k;
			next=NULL;
		}
};

class Linkedlist
{
	public:
		Node* head;
		
		Linkedlist()
		{
			head=NULL;
		}
		
		Linkedlist(Node *n)
		{
			head=n;
		}
		Node * nodeExists(int k){
			Node * temp=NULL;
			//value to be returned
			Node* ptr=head;
			while(ptr!=NULL){
				if(ptr->key==k){
					temp=ptr;
					ptr=NULL;
				}
				ptr=ptr->next;
			}
			return temp;
			
		}
		
		void AppendNode(Node *n){
			{
				if(nodeExists(n->key)!=NULL){
					cout<<"The node already exists in the list";
				}
				else{
					if(head==NULL){
						//means this is the first node:
						head=n;
						cout<<"Node appended successfully";
					}
					else{
						Node *ptr=head;
						while(ptr->next!=NULL){
							ptr=ptr->next;
						}
						ptr->next=n;
						cout<<"Node appended successfully";
					}
				}
			}
		}
		
		void PrependNode(Node *n){
			if(nodeExists(n->key)!=NULL){
				cout<<"Node already exists";
			}
			else{
				//It doesnt really matter if the head is null here
				n->next=head;
				head=n;
				cout<<"Node prepended successfully";
			}
		}
		
		//Insert after a particular node based on key value:
		void insertNode(Node* n,int k){
			//to check if node is actually present:
			if (nodeExists(k)==NULL){
				cout<<"The key doesnt exist in the first place lol";
			}
			else{
			
				if(nodeExists(n->key)!=NULL){
					cout<<"Node already present";
				}
				else{
					Node *ptr=head;
					while(ptr!=NULL){
						if(ptr->key==k){
							n->next=ptr->next;
							ptr->next=n;
						}
						ptr=ptr->next;
					}
					
				}
			}
		}
		
		void deleteNode(int k){
			//To check if the node exists in the first place:
			if(nodeExists(k)==NULL){
				cout<<"The key doesnt exist in the first place lol";
			}
			else{
				//okay the key is present
				if(head->key==k){
					head=head->next;
					cout<<"Node deleted successfully";
				}
				Node* ptr=head;
				Node*temp1=head;
				Node * temp2= head->next;
				while(temp2!=NULL){
					if(temp2->key==k){
						//node to be deleted
						ptr=temp1;
						ptr->next=temp2->next;
						cout<<"Node deleted successfully";
						temp2=NULL;
						
						
					}
					temp1=temp1->next;
					temp2=temp2->next;
				}
			}
		}
		
		//updating the node based on key value:
		void updateNode(int k,int v){
			//to check if the key exists in the first place:
			if(nodeExists(k)==NULL){
				cout<<"The key doesnt exist in the first place";
			}
			else{
				Node *ptr=head;
				while(ptr!=NULL){
					if (ptr->key==k){
						//found that node:
						ptr->value=v;
						cout<"Value found successfully";
						ptr=NULL;
					}
				}
			}
		}
		
		void Printlist()
		{
			//No need for arguments:
			if(head==NULL){
				cout<<"No nodes in the linked list then what exactly are you trying to print? :D";
			}
			else{
				Node* ptr=head;
				while(ptr!=NULL){
					cout<<ptr->value<<"\t";
				}

			}
		}
		
		
};

int main()
{	
	cout<<"Legend:\n";
	cout<<"1.check if node exists(based on k)\n";
	cout<<"2.Append a node\n";
	cout<<"3.Prepend a node \n";
	cout<<"4.Insert after a node(based on k)\n";
	cout<<"5.delete a node(based on k)\n";
	cout<<"6.Update the node(based on k)\n";
	cout<<"7.Printing the linked list\n";
	cout<<"8.exit\n"
	cout<<"9.display this menu\n";
	
	int num;
	Linkedlist list1();
	while(true){
		//menu based program
		cout<<"**********************************************************";
		cout<<"Enter your option 1,2,3,4,5,6,7,8,9";
		cout<<"**********************************************************";	
		cin>>num;
		switch(num)	{
			case(1){
				cout<<"Enter the k value to check";
				cin>>k;
				Node *ptr;
				ptr=list1.nodeExists(k);
				if(ptr==NULL){
					cout<<"Node with key value k doesnot exist";
				}
				else{
					cout<<"Node value with key k exists";
					cout<<"located at "<<ptr;
				}
				
				break;
			}
			
			case(2){
				//I have to create a node here first 
				int value,key;
				cout<<"Enter the element for appending";
				cin>>value;
				cout<<"Enter the key value";
				cin>>key;
				Node *n(value,key);
				list1.AppendNode(n);
				
				break;
			}
			
			case(3){
				
				int value,key;
				cout<<"Enter the element for prepending";
				cin>>value;
				cout<<"Enter the key value";
				cin>>key;
				Node *n(value,key);
				list1.PrependNode(n);
				break;
			}
			
			case(4){
				//Insert after a node with key
				int value,key1,key2;
				cout<<"Enter the element to be inserted";
				cin>value;
				cout<<"Enter the key value";
				cin>>key1;
				cout<<"Enter the key before this node";
				cin>>key2;
				Node* n(value,key1);
				list1.insertNode(n,key2);
				break;
			}
			
			case(5){
				//deletion of node:
				int key;
				cout<<"Enter the value of k";
				cin>>key;
				list1.deleteNode(k);
				break;
			}
			
			case(6){
				//node updation based on k
				int key
				break;
				
			}
		}	
	}
}
		
