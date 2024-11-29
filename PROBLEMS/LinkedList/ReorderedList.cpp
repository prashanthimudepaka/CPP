//143. Reorder List (important)(combination of three questions)
/*(make list into two halfs,
find middle node,
reverse list,
insert in between the nodes)*/
//https://leetcode.com/problems/reorder-list/description/?envType=problem-list-v2&envId=plakya4j

class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {

        if (!head || !head->next)
        return;
    //make list to two halfs (starting nodes to middle node ->l1 and end nodes->l2 )
        ListNode* fast = head;
        ListNode* slow = head;
        //to find mid
        while(fast && fast -> next){
            fast = fast -> next ->next;
            slow = slow -> next;
        }
        //from mid->next we get new list ex: 12345 ->s=3 ((4->5)new list) or 123456-> s=4(5->6 new list)
        ListNode* l2 = reverseList(slow -> next); //reverse mid+1 node to end notes (last nodes) ie 6->5
        slow -> next = nullptr;
        ListNode* l1 = head; 
        //place 6 in between 1 and 2
        while(l2){
            ListNode* temp1 = l1 -> next; //2
            ListNode* temp2 = l2 -> next;//5
            l1 -> next = l2; //1->6->
            l2 -> next = temp1;//1->6->2->
            l1 = temp1;
            l2 = temp2;
        }
    }
};