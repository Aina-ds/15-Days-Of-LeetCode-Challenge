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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Dummy node to build the result list
        ListNode dummy;
        ListNode* tail = &dummy;  // tail points to last node in merged list

        // While both lists are not empty
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;     // attach list1 node
                list1 = list1->next;    // move list1 pointer
            } else {
                tail->next = list2;     // attach list2 node
                list2 = list2->next;    // move list2 pointer
            }
            tail = tail->next;          // move tail forward
        }

        // If one list is not finished, attach the remaining part
        if (list1 != nullptr) {
            tail->next = list1;
        } else if (list2 != nullptr) {
            tail->next = list2;
        }

        // dummy.next is the head of the merged sorted list
        return dummy.next;
    }
};
