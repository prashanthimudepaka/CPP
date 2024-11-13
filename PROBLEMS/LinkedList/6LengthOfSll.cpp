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
int main()
{
     
     
    Node* ob1=new Node(1);
    Node* ob2=new Node(2);
    Node* ob3=new Node(3);
    Node* ob4=new Node(4);
    Node* ob5=new Node(5);
    Node * head=ob1;
    ob1->next=ob2;
    ob2->next=ob3;
    ob3->next=ob4;
    ob4->next=ob5;
    int count=0;
    while(head!=nullptr)
    {
        count++;
        cout<<head->data<<endl;
        head=head->next;

    }
    cout<<count;
     return 0;

}
