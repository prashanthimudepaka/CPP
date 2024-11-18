#include <iostream>
using namespace std;

// Definition for singly-linked list.
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to detect a cycle in a linked list using Floyd's Cycle Detection Algorithm
bool hasCycle(ListNode *head) {
    ListNode *fast = head;
    ListNode *slow = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;            // Move slow pointer by 1 step
        fast = fast->next->next;      // Move fast pointer by 2 steps

        if (slow == fast) {           // Cycle detected
            return true;
        }
    }

    return false;  // No cycle detected
}

int main() {
    // Create nodes
    ListNode *head = new ListNode(1);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(3);
    ListNode *fourth = new ListNode(4);
    ListNode *fifth = new ListNode(5);

    // Link the nodes to form a linked list: 1 -> 2 -> 3 -> 4 -> 5
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Create a loop (cycle): fifth node points back to the second node
    fifth->next = second;

    // Detect cycle
    if (hasCycle(head)) {
        cout << "Cycle detected!" << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    return 0;
}
