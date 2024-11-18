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
Node* createLinkedList(const vector<int>& values) {
    if (values.empty()) return nullptr;

    Node* head = new Node(values[0]); // Create the head node
    Node* current = head;

    // Iterate through the rest of the values and create nodes
    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new Node(values[i], current); // Set the prev pointer to current node
        current = current->next; // Move to the new node
    }

    return head;
}

// Function to delete the node at the end of the doubly linked list
Node* deleteAtEnd(Node* head) {
    // If the list is empty, return nullptr
    if (head == nullptr) {
        cout << "The list is empty!" << endl;
        return nullptr;
    }

    // If there's only one node
    if (head->next == nullptr) {
        delete head; // Delete the only node in the list
        return nullptr; // List is now empty
    }

    // Traverse to the last node
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    // Current now points to the last node
    Node* prevNode = current->prev;

    // Update the prev pointer of the last node's previous node
    prevNode->next = nullptr;

    // Delete the last node
    delete current;

    return head;
}


void printList(Node* head) {
    // If the list is empty
    if (head == nullptr) {
        cout << "The list is empty!" << endl;
        return;
    }

    Node* current = head;
    
    // Traverse the list and print the elements
    while (current != nullptr) {
        cout << current->data << " "; 
        current = current->next; 
    
    cout << endl;
}
}


// Function to search for an element in the doubly linked list
Node* searchElement(Node* head, int value) {
    Node* current = head;

    // Traverse the list
    while (current != nullptr) {
        if (current->data == value) {
            // Element found, return the node
            return current;
        }
        current = current->next;
    }

    // Element not found, return nullptr
    return nullptr;
}

int main()
{
    vector<int> v={1,2,3,4,5};
    Node* head=createLinkedList(v);
    int value=3;
   Node* res=searchElement(head, value);
   cout<<res->data;
   return 0;

}