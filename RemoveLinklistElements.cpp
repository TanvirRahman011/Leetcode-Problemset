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
    ListNode* removeElements(ListNode* head, int val) {
       
        ListNode* dummy = new ListNode(-1, head);
        ListNode* current = dummy;
        
        while (current->next!=NULL) {
            if (current->next->val == val) {
                current->next = current->next->next;  // Remove node
            } else {
                current = current->next;  // Move to next node
            }
        }
        
        return dummy->next;
    }
};
    