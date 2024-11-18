

#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node* next;

Node(int data1)
{
    data=data1;
    next=nullptr;
}
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

// Function to create a linked list from a vector of values
Node* createLinkedList(const vector<int>& values) {
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

// Function to print the linked list
void printLength(Node* head) {
    int count=0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    cout << count<<endl;
}

// Main function
int main() {
    // Create a linked list using the helper function
    vector<int> values = {1, 2, 3, 4, 5};
    Node* head = createLinkedList(values);

    // Print the linked list
    cout << "Linked List: ";
    printLength(head);

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
//     int count=0;
//     while(head!=nullptr)
//     {
//         count++;
//         cout<<head->data<<endl;
//         head=head->next;

//     }
//     cout<<count;
//      return 0;

// }
