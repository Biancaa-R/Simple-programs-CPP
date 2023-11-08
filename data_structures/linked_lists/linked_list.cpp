
#include <iostream>
using namespace std;
// Class Node
class Node{
public:
 int data;
 // Points to the next node.
 Node* next;
 Node()
 {
 this->data=data;
 this->next=next;
 }
};
// Prints contents of linked list starting from the given node
void printList(Node* n)
{
 while (n != NULL) {
 cout << n->data << " "; 
 n = n->next;
 }
}
// Driver's code
int main()
{
 Node* head=NULL ;
 Node* second=NULL;
 Node* third=NULL;

 // allocate 3 nodes in the heap
 cout<<head<<"\n";
 head = new Node();
 second = new Node();
 third = new Node();

 head->data = 1; // assign data in first node
 head->next = second; // Link first node with second
 
 second->data = 2; // assign data to second node
 second->next = third;// Link second node with third
 cout<<third<<"hi\n";

 third->data = 3; // assign data to third node
 third->next = NULL;//last node stores null

 // Function call
 printList(head);

 return 0;
} 
