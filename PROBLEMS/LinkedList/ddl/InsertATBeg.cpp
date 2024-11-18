#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev; // Pointer to the previous node
    Node* next; // Pointer to the next node

    // Constructor to initialize data and pointers
    Node(int data1, Node* prev1 = nullptr, Node* next1 = nullptr) {
        data = data1;
        prev = prev1;
        next = next1;
    }
};

// Function to create a doubly linked list from a vector of values
Node* createLinkedList( vector<int> values) {
    if (values.empty()) return nullptr;

    Node* head = new Node(values[0]); // Create the head node
    Node* current = head;

    
    for (int i = 1; i < values.size(); ++i) {
        current->next = new Node(values[i], current); // Set the prev pointer to current node
        current = current->next; // Move to the new node
    }

    return head;
}

// Function to insert a node at the beginning of the doubly linked list
Node* insertAtBegin(Node* head, int value) {
    // Create a new node
    Node* newNode = new Node(value);

    // If the list is not empty, adjust the current head's prev pointer
    if (head != nullptr) {
        newNode->next = head;  
        head->prev = newNode;  
    }

    // Set the new node as the new head
    return newNode;
}

void print(Node* head) {
    cout << "Doubly Linked List (Forward): ";
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}



int main() {
    
    vector<int> values = {2, 3, 4, 5};
    Node* head = createLinkedList(values);
    head = insertAtBegin(head, 1);
    head = insertAtBegin(head, 0);
    

    print(head);

   
    return 0;
}
