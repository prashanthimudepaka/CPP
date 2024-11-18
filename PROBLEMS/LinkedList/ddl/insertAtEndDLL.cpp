#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    // Data part of the node.
    int data;
    // Pointer to the next node.
    Node* next;
    // Pointer to the previous node.
    Node* prev;

    // Constructor to initialize the node with given data.
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};


void insertAtEnd(Node*& head, int data)
{
 // Create a new node with the given data.
    Node* newNode = new Node(data);

    // Check if the doubly linked list is empty.
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Traverse to the last node of the list.
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Update the next and previous pointers to insert the
    // new node at the end.
    temp->next = newNode;
    newNode->prev = temp;
}

int main()
{

Node* head=nullptr;
insertAtEnd(head,10);
insertAtEnd(head,18);
insertAtEnd(head,19);


while(head!=nullptr)
{
    cout<<head->data<<endl;
    head=head->next;
}







}
