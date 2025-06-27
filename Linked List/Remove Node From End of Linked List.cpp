/*Remove Node From End of Linked List
Solved 
You are given the beginning of a linked list head, and an integer n.

Remove the nth node from the end of the list and return the beginning of the list.*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=new ListNode(0,head);
        ListNode* left=temp;
        ListNode* right=head;
        while(n>0)
        {
            right=right->next;
            n--;
        }
        while(right!=nullptr)
        {
            left=left->next;
            right=right->next;
        }
        left->next=left->next->next;
        return temp->next;
        
    }
};
