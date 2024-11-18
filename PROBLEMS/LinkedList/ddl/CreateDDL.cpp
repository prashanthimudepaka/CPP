#include <bits/stdc++.h>
using namespace std;

// Node class definition for doubly linked list
class Node {
public:
    int data;
    Node* prev; // Pointer to the previous node
    Node* next; // Pointer to the next node

    // Constructor with data, prev, and next pointers
    Node(int data1, Node* prev1 , Node* next1 ) {
        data = data1;
        prev = prev1;
        next = next1;
    }
    Node(int data1)
    {
        data=data1;
        prev=nullptr;
        next=nullptr;
        }
};


Node* createSingleNodeList(int value) {
    return new Node(value); // Create a node with the given value
}


void printForward(Node* head) {
    cout << "Doubly Linked List (Forward): ";
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
Node* createLinkedList(vector<int> values) {
    if (values.empty()) return nullptr;

    Node* head = new Node(values[0]); // Create the head node
    Node* current = head;

    // Iterate through the rest of the values and create nodes
    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new Node(values[i]);
        current = current->next;
    }

    return head;
}

// Main function
int main() {
    // Create a doubly linked list with a single node
    // Node* head = createSingleNodeList(10);
    // head ->next=createSingleNodeList(89);
    // head->next->next=createSingleNodeList(90);
    // head->next->next->next=createSingleNodeList(99);
    vector<int> values = {1, 2, 3, 4, 5};
    Node* head = createLinkedList(values);

  
     

    // Print the list in forward direction
    printForward(head);

    // Since there is only one node, both prev and next will be nullptr


    return 0;
}
