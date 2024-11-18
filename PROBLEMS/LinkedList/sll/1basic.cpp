/*
1 2 3 4 5
store in linked list and print
*/
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
        cout<<head->data<<endl;
        count++;
        head=head->next;

    }
cout<<count<<" is the length of linked list";
     return 0;

}

/*
1. length of linked list
2. inserting an element at begin
3. insert at the end
4. delete an element at begin
5. delete an element at end
6.Search for an element
7. double linked list
*/
/*

