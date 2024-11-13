#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next; //pointing  to an Node
    public:
    Node(int data1, Node *next1)
    {
        data=data1;
        next=next1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }

};

Node* insertHead(Node* head, int val) {
    Node* temp = new Node(val, head);
     return temp;
}

int main()
{
     Node* head=insertHead(nullptr,10);
     head=insertHead(head,20);
     

     
    // Node* ob1=new Node(1);
    // Node* ob2=new Node(2);
    // Node* ob3=new Node(3);
    // Node* ob4=new Node(4);
    // Node* ob5=new Node(5);
     
    // Node * head=ob1;
    // head->next=nullptr;
    // head=ob2;
    // head->next=ob1;
    // head=ob3;
    // head->next=ob2;
    // head=ob4;
    // head->next=ob3;
    // head=ob5;
    // head->next=ob4;
    
    while(head!=nullptr)
    {
        cout<<head->data<<endl;
        head=head->next;

    }
// Node* ob6=new Node(50);
// head=ob6;
// head->next=ob5;
// while(head!=nullptr)
//     {
//         cout<<head->data<<endl;
//         head=head->next;

//     }
     return 0;

}
