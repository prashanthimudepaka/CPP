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

// Function to insert a node at the end of the doubly linked list
Node* insertAtEnd(Node* head, int value) {
    // Create a new node
    Node* newNode = new Node(value);

    // If the list is empty, make the new node the head
    if (head == nullptr) {
        return newNode;
    }

    // Traverse to the last node
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    // Update the pointers to insert the new node at the end
    current->next = newNode;
    newNode->prev = current;

    return head;
}

// Function to print the doubly linked list in forward direction
void printForward(Node* head) {
    cout << "Doubly Linked List (Forward): ";
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}



int main() {

    vector<int> values = {1, 2, 3, 4};
    Node* head = createLinkedList(values);
    head = insertAtEnd(head, 5);
    printForward(head);

    return 0;
}
