#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;//pointing  to an Node
    public:
    Node(int data1, Node* prev1,Node *next1)
    {
        data=data1;
        next=next1;
        prev=prev1;

    }
    Node(int data1)
    {
        data=data1;
        prev=nullptr;
        next=nullptr;
    }
    Node(int data1, Node* prev1)
    {
        data=data1;
        prev=prev1;
    }

};

void  SearchElement(int value,Node* head)
{
    bool flag=0;
    int count=0;
 while(head!=nullptr)
    {
        count++;
        
        if(head->data==value)
        {
            flag=1;
            cout<<value<<" found"<<" at position-->"<<count;
            break;
        }
     head=head->next;

    }
    if(flag==0)
    cout<<"not found"<<endl;



}
Node * inserting(Node* head,int value)
{
    
}
int main()
{
     
     
    Node* ob1=new Node(1);
    Node* ob2=new Node(2,ob1);
    Node* ob3=new Node(3,ob2);
    Node* ob4=new Node(4,ob3);
    Node* ob5=new Node(5,ob4);
    Node * head=ob1;
    ob1->next=ob2;
    ob2->next=ob3;
    ob3->next=ob4;
    ob4->next=ob5;
    int value=100;
   
 SearchElement(value,head);
   return 0;

}