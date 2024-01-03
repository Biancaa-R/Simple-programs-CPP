# include <iostream>
using namespace std;

//Polynomial addition using linked list:

class Node{
	public:
		Node* next;
		int value;
		int key;

		Node()
		{
			next=NULL;
			value=0;
			key=0;
		}

		Node(int k,int v){
			next=NULL;
			value=v;
			key=k;
		}

};

class linked_list
{
	public:
		Node * head;

	linked_list()
	{
		head=NULL;
	}

	bool ifExists(int k)
	{
		if(head==NULL){
			return false;
		}
		else{
			Node* ptr= head;
			while(ptr!=NULL){
				if(ptr->key==k){
					ptr=NULL;
					break;
				}
				ptr=ptr->next;
			}
			return (ptr=NULL);
		}
	}

	void addition(linked_list &l2,linked_list &l3){
		Node* ptr1=head;
		Node* ptr2=l2.head;
		Node* ptr3=l3.head;

		while(ptr1!=NULL || ptr2!=NULL){
			Node * newnode= new Node();
			if(ptr1!=0 && ptr2!=0){
				if(ptr1->key>ptr2->key){
					newnode->key=ptr1->key;
					newnode->value=ptr1->value;
					ptr1=ptr1->next;
				}
			
				else if(ptr1->key<ptr2->key){
					newnode->key=ptr2->key;
					newnode->value=ptr2->value;
					ptr2=ptr2->next;
				}
				else{
					//both the darls are equal:
					newnode->value=ptr1->value+ptr2->value;
					newnode->key=ptr1->key;
					ptr1=ptr1->next;
					ptr2=ptr2->next;
				}
		}
		else if (ptr1!=NULL){
			newnode->key=ptr1->key;
			newnode->value=ptr1->value;
			ptr1=ptr1->next;
		}

		else if (ptr2!=NULL){
			newnode->key=ptr2->key;
			newnode->value=ptr2->value;
			ptr2=ptr2->next;
		}

		//All the possible cases were covered:

		if(l3.head==NULL){
			//when we consider l3 as a linked list dot dhan podanum
			l3.head=newnode;
			ptr3=l3.head;
		}
		else{
			ptr3->next=newnode;
			ptr3=ptr3->next;
		}
	}

	
        // Display the result
        ptr3 = l3.head;
        while (ptr3 != NULL) {
            cout << ptr3->value << "x^"<<ptr3->key<<"\t";
            if(ptr3->next!=NULL){
                cout<<"+";
            }
            ptr3 = ptr3->next;
        }
        cout<<"\n";
	}

	//display the result
	void display(Node *n)
	{
		Node*ptr=n;
		while(ptr!=NULL){
			cout<<ptr->value<<"\t";
		}
	}

	void appendnode(Node* n){
		if(head==NULL){
			head=n;
		}
		else{
			Node* ptr=head;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			ptr->next=n;
		}
	}
};

int main() {
    linked_list l1;
    linked_list l2;
    linked_list l3;
    bool value=false;
    int v, k;

    for (int i = 0; i <= 4; i++) {
        cout << "Contents of linked_list1\n";
        cout << "Enter value";
        cin >> v;
        cout << "Enter exponential";
        cin >> k;

        Node* n = new Node(k, v);
        l1.appendnode(n);
            
        
        }

    

    for (int i = 0; i <= 4; i++) {
        cout << "Contents of linked_list2\n";
        cout << "Enter value";
        cin >> v;
        cout << "Enter exponential";
        cin >> k;
        Node* n = new Node(k, v);
		l2.appendnode(n);

        }
    

    l1.addition(l2, l3);

}
