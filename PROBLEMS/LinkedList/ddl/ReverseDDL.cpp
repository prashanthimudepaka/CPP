#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    
    // Constructor for Node
    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

// Function to create a doubly linked list from a vector of values
Node* createLinkedList(const vector<int>& values) {
    if (values.empty()) return nullptr;

    Node* head = new Node(values[0]);
    Node* current = head;

    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new Node(values[i]);
        current->next->prev = current;
        current = current->next;
    }

    return head;
}

// Function to print the doubly linked list in reverse order
void printReverse(Node* head) {
    if (head == nullptr) {
        cout << "The list is empty!" << endl;
        return;
    }

    // Step 1: Traverse to the last node
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    // Step 2: Print the list in reverse order by traversing backward
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->prev;  // Move to the previous node
    }

    cout << endl;
}

int main() {
    // Sample vector of values to create a doubly linked list
    vector<int> values = {1, 2, 3, 4, 5};

    // Create the doubly linked list from the vector
    Node* head = createLinkedList(values);

    // Print the doubly linked list in reverse order
    cout << "List in reverse order: ";
    printReverse(head);

    return 0;
}
