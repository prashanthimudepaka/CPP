
#include <bits/stdc++.h>
using namespace std;

// Define Node class
class Node {
public:
    int data;
    Node* next; // Pointing to another Node

    // Constructor with both data and next pointer
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to create a linked list
Node* createLinkedList(vector<int> values) {
    if (values.empty()) return nullptr;

    Node* head = new Node(values[0]); // Create the head node
    Node* current = head;

    // Iterate through the values and create subsequent nodes
    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new Node(values[i]);
        current = current->next;
    }

    return head;
}

// Function to search for a value in the linked list
void searchValue(Node* head, int value) {
    int position = 0;
    while (head != nullptr) {
        position++;
        if (head->data == value) {
            cout << value << " found at position --> " << position << endl;
            return;
        }
        head = head->next;
    }
    cout << value << " not found in the list." << endl;
}

// Main function
int main() {
    // Create linked list from a vector of values
    vector<int> values = {1, 2, 3, 4, 5};
    Node* head = createLinkedList(values);

    // Search for a specific value
    int valueToSearch = 1;
    searchValue(head, valueToSearch);

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
//     int value=1;
//     int count =0;
//     while(head!=nullptr)
//     {
//         count++;
//         if(head->data==value)
//         {
//             cout<<value<<" found"<<" at position-->"<<count;
//             break;
//         }
       
       
    
//      head=head->next;
//     }
 
//    return 0;

// }