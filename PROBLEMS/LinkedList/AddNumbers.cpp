#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;        // Data field
    Node* next;      // Pointer to the next node

    // Default constructor
    Node(int value = 0) : 
        data(value), 
        next(nullptr) {

        }
};
 Node* addTwoNumbers(Node* l1, Node* l2) {
        Node* dummyNode=new Node(-1);
        Node* current=dummyNode;
        Node* temp1=l1;
        Node* temp2=l2;
        int c=0;
        int sum=0;
        while(temp1 || temp2 || c)
        {
            sum=c;
            if(temp1)
            {
              
                sum+=(temp1->data);
                temp1=temp1->next;

            }
           
            if(temp2)
            {
                
                sum+=temp2->data;
                temp2=temp2->next;
            }
             c=sum/10;
            Node* newNode=new Node(sum%10);
            
            current->next=newNode;
            current=current->next;

        }
        if(c)
        {
            Node* newNode=new Node(c);

            current->next=newNode;
            current= current->next;

        }
    
    return dummyNode->next;
    }

Node* Lists(const vector<int>& vec) {
    if (vec.empty()) {
        return nullptr; // Return null if the vector is empty
    }
    
    // Create the head node of the linked list
    Node* head = new Node(vec[0]);
    Node* current = head;

    // Traverse the vector and create nodes for the linked list
    for (size_t i = 1; i < vec.size(); ++i) {
        current->next = new Node(vec[i]); // Create a new node and link it
        current = current->next; // Move the current pointer to the new node
    }

    return head; // Return the head of the linked list
}
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
    int main()
    {
       vector<int> vec1 = {7, 6,4, 1, 0};
       vector<int> vec2 = {0, 2, 1, 3, 5};

    
    // Create a linked list from the vector
    Node* l1 = Lists(vec1); 
    Node* l2 = Lists(vec2);
    Node * head=addTwoNumbers(l1, l2);
printList(head);

    }  
       /*0 1 4 6 7 
        5 3 1 2 0
    --------------- 
       5 4 5 8 7 <=sum
   
       output 7 8 5 4 5
       */