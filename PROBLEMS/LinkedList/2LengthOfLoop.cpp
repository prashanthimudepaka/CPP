#include <bits/stdc++.h>
using namespace std;

using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data2)
    {
        data = data2;
        next = nullptr;
    }
};
Node *inserting(int data, Node *head)
{

    Node *temp = new Node(data, head);
    return temp;
}

int Detect(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    int count = 0;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            slow = slow->next;
            count++;
            while (slow != fast)
            {
                count++;
                slow = slow->next;
            }
            return count;
        }
    }
    return 0;
}
Node *SearchElement(int value, Node *head)
{
    bool flag = 0;
    int count = 0;
    while (head != nullptr)
    {
        count++;

        if (head->data == value)
        {
            flag = 1;
            // cout<<value<<" found"<<" at position-->"<<count;
            return head;
        }
        head = head->next;
    }
    if (flag == 0)
        cout << "not found" << endl;
}void print(Node * head)
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
    Node *head = nullptr;
    head = inserting(5, head);
    head = inserting(4, head);
    head = inserting(3, head);
    
    head = inserting(2, head);
    head = inserting(1, head);
    Node *temp = SearchElement(3, head);
    Node *temp1 = SearchElement(5, head);
    temp1->next = temp;

     cout << "count=" << Detect(head);
    //print(head);
    return 0;
}