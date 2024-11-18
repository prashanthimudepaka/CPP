#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

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

// Function to print the list
void printList(Node *head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    Node *head = nullptr; // Start with an empty list
    
    // Insert values at the end
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    // Print the list
    printList(head);
    
    return 0;
}
