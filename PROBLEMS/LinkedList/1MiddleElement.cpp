#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *middleNode(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node *insertHead(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}
void print(Node * head)
{
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{
    Node* ob1=insertHead(nullptr,4);
    Node* ob2=insertHead(ob1,6);
    Node* ob3=insertHead(ob2,8);
    Node* ob4=insertHead(ob3,10);
    Node* ob5=insertHead(ob4,12);
    print(ob5);
    Node* mid=middleNode(ob5);
    cout<<mid->data<<" is the middle element"<<endl;
    return 0;


    

}
