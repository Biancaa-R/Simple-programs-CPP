#include <iostream>
using namespace std;
// Node class
class Node {
public:
 int data;
 Node* next;
 // Default constructor
 Node()
 {
 data = 0;
 next = NULL;
 }
 // Parameterised Constructor
  Node(int data)
 {
 this->data = data;
 this->next = NULL;
 }
};

// Linked list class
class Linkedlist {
 Node* head;

public:
 // Default constructor
 Linkedlist() { head = NULL; }

 // Function to insert a node at the end
 void insertNode(int);

 // Function to print
 void printList();

 // Function to delete node at given position
 void deleteNode(int);
};

// delete the node at given position
void Linkedlist::deleteNode(int nodeOffset)
{
 Node *temp1 = head, *temp2 = NULL;
 int ListLen = 0;

 if (head == NULL) {
 cout << "List empty." << endl;
 return;
 }

 // Find length
 while (temp1 != NULL) {
 temp1 = temp1->next;
 ListLen++;
 }

 // Check if the position to be
 // deleted is greater than the length
 // of the linked list.

 if (ListLen < nodeOffset) {
 cout << "Index out of range"
 << endl;
 return;
 }

 // Declare temp1
 temp1 = head;

 // Deleting the head.
 if (nodeOffset == 1) {

 // Update head
 head = head->next;
 delete temp1;
 return;
 }

 // Traverse the list
 while (nodeOffset-- > 1) {

 // Update temp2
 temp2 = temp1;

 // Update temp1
 temp1 = temp1->next;
 }

 // Change the next pointer of the previous node.
 temp2->next = temp1->next;

 // Delete the node
 delete temp1;
}

// Function to insert a new node.
void Linkedlist::insertNode(int data)
{
 // Create the new Node.
 Node* newNode = new Node(data);

 // Assign to head
 if (head == NULL) {
 head = newNode;
 return;
 }

 // Traverse till end of list
 Node* temp = head;
 while (temp->next != NULL) {

 // Update temp
 temp = temp->next;
 }

 // Insert at the last.
 temp->next = newNode;
}

// Function to print
void Linkedlist::printList()
{
 Node* temp = head;

 // Check for empty list
 if (head == NULL) {
 cout << "List empty" << endl;
 return;
 }

 // Traverse the list
 while (temp != NULL) {
 cout << temp->data << " ";
 temp = temp->next;
 }
}

// Driver Code
int main()
{
 Linkedlist list;
 // Inserting nodes manually
 //list.insertNode(10);
 // Inserting nodes getting the data from the user
 int data;
 cout<<"Enter the data items until 0 is encountered: ";
 do
 {
 cin>>data;
 if(data!=0)
 list.insertNode(data);
 }while(data!=0);

 cout << "Initial elements of the list are: ";
 // Print the list
 list.printList();
 cout << endl;
 int pos;
 cout<<"Enter the position of deletion: ";
 cin>>pos;
 // Delete node at position 3.
 list.deleteNode(pos);
 cout << "Elements of the list after deleting a node at position "<<pos<< " are: ";
 list.printList();
 cout << endl;
 return 0;
} 
