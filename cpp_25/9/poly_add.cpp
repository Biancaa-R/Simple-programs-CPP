#include <iostream>
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
            cout << ptr3->data << "\t";
            ptr3 = ptr3->next;
        }
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
    int v, k;

    for (int i = 0; i < 4; i++) {
        cout << "Contents of linked_list1\n";
        cout << "Enter value";
        cin >> v;
        cout << "Enter exponential";
        cin >> k;
        Node* n = new Node(v, k);
        l1.Append_node(n);
    }

    for (int i = 0; i < 4; i++) {
        cout << "Contents of linked_list2\n";
        cout << "Enter value";
        cin >> v;
        cout << "Enter exponential";
        cin >> k;
        Node* n = new Node(v, k);
        l2.Append_node(n);
    }

    l1.Addition(l2, l3);

    // Cleanup
    Node* current = l3.head;
    Node* next;
    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
}

