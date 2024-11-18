#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
int data;
Node* next;
public:
Node(int data1, Node* next1)
{
    data=data1;
    next=next1;
}
Node(int data2)
{
    data=data2;
    next=nullptr;
}

};
Node* inserting(int data, Node * head)
{

    Node* temp=new Node(data,head);
    return temp;
}

int main()
{
    vector<int> vec={1,2,3,4,5};
Node* head=new Node(vec[0]);
cout<<head->data;

    return 0;
}