

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to delete the first node
Node *deleteAtBeginning(Node *head) {
    if (head == nullptr) {
        // If the list is empty, nothing to delete
        cout << "List is already empty!" << endl;
        return nullptr;
    }
    Node *temp = head;      // Store the current head node
    head = head->next;      // Move head to the next node
    delete temp;            // Free memory of the old head
    return head;            // Return the updated head
}

// Function to print the list
void printList(Node *head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}
// Function to insert at the end of the list
Node *insertAtEnd(Node *head, int val) {
    Node *newNode = new Node(val); // Create a new node
    if (head == nullptr) {
        // If the list is empty, the new node is the head
        return newNode;
    }
    // Traverse to the last node
    Node *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    // Link the new node to the last node
    temp->next = newNode;
    return head;
}
int main() {
    // Create a simple list for testing: 30 -> 20 -> 10
    Node *head =nullptr;
     head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 13);

    // Print the initial list
    cout << "Initial List: ";
    printList(head);

    // Delete the first node
    head = deleteAtBeginning(head);
    cout << "After deleting at beginning: ";
    printList(head);

    // Delete again
    head = deleteAtBeginning(head);
    cout << "After deleting at beginning: ";
    printList(head);

    // Delete the last node
    head = deleteAtBeginning(head);
    cout << "After deleting at beginning: ";
    printList(head);

    // Try deleting from an empty list
    head = deleteAtBeginning(head);

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next; //pointing  to an Node
//     public:
//     Node(int data1, Node *next1)
//     {
//         data=data1;
//         next=next1;
//     }
//     Node(int data1)
//     {
//         data=data1;
//         next=nullptr;
//     }

// };
// int main()
// {
     
     
//     Node* ob1=new Node(1);
//     Node* ob2=new Node(2);
//     Node* ob3=new Node(3);
//     Node* ob4=new Node(4);
//     Node* ob5=new Node(5);
//     Node * head=ob1;
//     head->next=nullptr;
//     head=ob2;
//     head->next=ob1;
//     head=ob3;
//     head->next=ob2;
//     head=ob4;
//     head->next=ob3;
//     head=ob5;
//     head->next=ob4;
//     int n=1;

//     if(head!=nullptr)
//          head=head->next;
    
    

//     while(head!=nullptr)
//     {
//         cout<<head->data<<endl;
//         head=head->next;

//     }

//      return 0;

// }
