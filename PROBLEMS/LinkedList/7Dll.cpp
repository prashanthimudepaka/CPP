#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev; //pointing  to an prev Node

    Node* next; //pointing  to an next Node
    public:
    Node(int data1, Node *prev1,Node *next1)
    {
        data=data1;
        prev=prev1;
        next=next1;

    }
    Node(int data1)
    {
        prev=nullptr;
        data=data1;
        next=nullptr;
    }

};
int main()
{
Node *ob1=new Node(1);
Node *ob2=new Node(2);
Node *ob3=new Node(3);
Node *ob4=new Node(4);
Node *ob5=new Node(5);
Node *head=ob1;
head->prev=nullptr;
head->next=ob2;
ob2->prev=ob1;
ob2->next=ob3;
ob3->prev=ob2;
ob3->next=ob4;
ob4->prev=ob3;
ob4->next=ob5;
ob5->prev=ob4;
ob5->next=nullptr;
while(head!=nullptr)
{
    cout<<head->data<<endl;
    head=head->next;
}







}
