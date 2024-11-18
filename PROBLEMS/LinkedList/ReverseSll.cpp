

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    // Constructor for Node
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to reverse a singly linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;  // Store the next node
        current->next = prev;  // Reverse the current node's next pointer
        prev = current;        // Move prev and current one step forward
        current = next;
    }

    return prev;  // prev will be the new head of the reversed list
}

// Function to print the singly linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Creating a simple singly linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Print original list
    cout << "Original list: ";
    printList(head);

    // Reverse the list
    head = reverseList(head);

    // Print the reversed list
    cout << "Reversed list: ";
    printList(head);

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
//     public:
//     Node(int data1,Node* next1)
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

// Node *inserting(Node *head, int val)
// {
//     Node *temp = new Node(val, head);
//     return temp;
// }
// void print(Node * head)
// {
//     Node* temp=head;
//     while(temp!=nullptr)
//     {
//         cout<<temp->data<<endl;
//         temp=temp->next;
//     }
// }

// Node* ReverseA(Node *head)
// {
//     Node* prev=nullptr;
//     Node* temp=head;
 
//     while(temp!=nullptr)
//     {
//            Node* front=temp->next;
//            temp->next=prev;
//            temp=front;
//     }
//     return prev;


// }

// int main()
// {
//     Node* head=   nullptr;
//     head=inserting(head,5);
//     head=inserting(head,4);
//     head=inserting(head,3);
//     head=inserting(head,2);
//     head=inserting(head,1);
//     print(head);
//     head= ReverseA(head);
//     // print(head);




// }
