
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a node at the end of the list
Node* insertAtEnd(Node* head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        // If the list is empty, the new node becomes the head
        return newNode;
    }
    // Traverse to the last node
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    // Link the new node to the last node
    temp->next = newNode;
    return head;
}

// Function to delete the last node
Node* deleteAtEnd(Node* head) {
    if (head == nullptr) {
        // If the list is empty, nothing to delete
        cout << "List is already empty!" << endl;
        return nullptr;
    }
    if (head->next == nullptr) {
        // If there is only one node, delete it and return nullptr
        delete head;
        return nullptr;
    }
    // Traverse to the second-last node
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    // Delete the last node
    delete temp->next;
    temp->next = nullptr;
    return head;
}

// Function to print the list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    Node* head = nullptr; // Start with an empty list

    // Insert nodes using the insertAtEnd method
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 10);

    // Print the list
    cout << "Initial Linked List: ";
    printList(head);

    // Delete nodes from the end
    head = deleteAtEnd(head);
    cout << "After deleting last node: ";
    printList(head);

    head = deleteAtEnd(head);
    cout << "After deleting last node: ";
    printList(head);

    head = deleteAtEnd(head);
    cout << "After deleting last node: ";
    printList(head);

    // Try deleting from an empty list
    head = deleteAtEnd(head);

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
//     ob1->next=ob2;
//     ob2->next=ob3;
//     ob3->next=ob4;
//     ob4->next=ob5;
    


//     while(head!=nullptr)
//     {
//         cout<<head->data<<endl;
//         head=head->next;
//         if(head->next->next==nullptr)
//         {
//             head->next=nullptr;
//         }

//     }
    

//      return 0;

// }
