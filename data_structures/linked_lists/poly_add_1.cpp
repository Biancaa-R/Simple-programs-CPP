#include <iostream>
#include<stdbool.h>
using namespace std;

class Node {
public:
    int data;
    int key;
    Node* next;

    Node() {
        data = 0;
        key = 0;
        next = NULL;
    }

    Node(int v, int k) {
        data = v;
        key = k;
        next = NULL;
    }
};

class linked_list {
public:
    Node* head;

    linked_list() {
        head = NULL;
    }

    bool ifExists(int k)
    {
        if(head==NULL){
            return false;
        }
        Node * ptr=head;
        while(ptr!=NULL){
            if(ptr->key==k){
                //ptr=NULL;
                //return true;
                break;
                }
            ptr=ptr->next;
        }
        return (ptr!=NULL);
    }
    

    void Addition(linked_list& l2, linked_list& l3) {
        Node* ptr1 = head;
        Node* ptr2 = l2.head;
        Node* ptr3 = l3.head;

        // Iterate over the linked lists and perform addition
        while (ptr1 != NULL || ptr2 != NULL) {
            Node* newNode = new Node();

            if (ptr1 != NULL && ptr2 != NULL) {
                if (ptr1->key > ptr2->key) {
                    newNode->data = ptr1->data;
                    newNode->key = ptr1->key;
                    ptr1 = ptr1->next;
                } else if (ptr2->key > ptr1->key) {
                    newNode->data = ptr2->data;
                    newNode->key = ptr2->key;
                    ptr2 = ptr2->next;
                } else {
                    newNode->data = ptr1->data + ptr2->data;
                    newNode->key = ptr1->key;
                    ptr1 = ptr1->next;
                    ptr2 = ptr2->next;
                }
            } else if (ptr1 != NULL) {
                newNode->data = ptr1->data;
                newNode->key = ptr1->key;
                ptr1 = ptr1->next;
            } else {
                newNode->data = ptr2->data;
                newNode->key = ptr2->key;
                ptr2 = ptr2->next;
            }

            // Append the new node to the result linked list
            if (l3.head == NULL) {
                l3.head = newNode;
                ptr3 = l3.head;
            } else {
                ptr3->next = newNode;
                ptr3 = ptr3->next;
            }
        }

        // Display the result
        ptr3 = l3.head;
        while (ptr3 != NULL) {
            cout << ptr3->data << "x^"<<ptr3->key<<"\t";
            if(ptr3->next!=NULL){
                cout<<"+";
            }
            ptr3 = ptr3->next;
        }
        cout<<"\n";
    }

    void Append_node(Node* n) {
        if (head == NULL) {
            head = n;
        } else {
            Node* ptr = head;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = n;
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
        value=l1.ifExists(k);
        if (value==false){
            Node* n = new Node(v, k);
            l1.Append_node(n);
        }
        else{
            Node * ptr=l1.head;
            while(ptr!=NULL){
                if(ptr->key==k){
                    ptr->data+=v;
                }
                ptr=ptr->next;
            }
        }

    }

    for (int i = 0; i <= 4; i++) {
        cout << "Contents of linked_list2\n";
        cout << "Enter value";
        cin >> v;
        cout << "Enter exponential";
        cin >> k;
        value=l2.ifExists(k);
        if (value==false){
            Node* n = new Node(v, k);
            l2.Append_node(n);
        }
        else{
            Node * ptr=l2.head;
            while(ptr!=NULL){
                if(ptr->key==k){
                    ptr->data+=v;
                }
                ptr=ptr->next;
            }
        }
    }

    l1.Addition(l2, l3);

}
