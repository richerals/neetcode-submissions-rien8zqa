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
        while (head && head->val == val) {
            head = head->next;
        }
        
        ListNode* cur = head;
        while (cur) {
            ListNode* temp = cur;
            while (temp->next && temp->next->val == val) {
                temp = temp->next;
            }
            if (temp != cur) {
                cur->next = temp->next;
            }
            cur = cur->next;
        }

        return head;
    }
};