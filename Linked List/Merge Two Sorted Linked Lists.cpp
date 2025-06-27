/*Merge Two Sorted Linked Lists
Solved 
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted linked list and return the head of the new sorted linked list.

The new list should be made up of nodes from list1 and list2.*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        ListNode* temp = nullptr;

        while (list1 && list2) {
            ListNode* node = nullptr;
            if (list1->val < list2->val) {
                node = list1;
                list1 = list1->next;
            } else {
                node = list2;
                list2 = list2->next;
            }

            node->next = nullptr;

            if (!head) {
                head = node;
                temp = head;
            } else {
                temp->next = node;
                temp = temp->next;
            }
        }

        while (list1) {
            ListNode* node = list1;
            list1 = list1->next;
            node->next = nullptr;

            if (!head) {
                head = node;
                temp = head;
            } else {
                temp->next = node;
                temp = temp->next;
            }
        }

        while (list2) {
            ListNode* node = list2;
            list2 = list2->next;
            node->next = nullptr;

            if (!head) {
                head = node;
                temp = head;
            } else {
                temp->next = node;
                temp = temp->next;
            }
        }

        return head;
    }
};
