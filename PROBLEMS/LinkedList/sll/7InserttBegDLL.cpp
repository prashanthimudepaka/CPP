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


void insertingBeg(Node*& head, int data)
{
    // Create a new node with the given data.
    Node* newNode = new Node(data);

    // Check if the doubly linked list is empty.
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Update the next and previous pointers to insert the
    // new node at the beginning.
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int main()
{

Node* head=nullptr;
insertingBeg(head,10);
insertingBeg(head,18);
insertingBeg(head,19);


while(head!=nullptr)
{
    cout<<head->data<<endl;
    head=head->next;
}







}
