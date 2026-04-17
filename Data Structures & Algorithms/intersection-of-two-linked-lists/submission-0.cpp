/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        set<ListNode*> s;
        ListNode* cur = headA;
        while (cur) {
            s.insert(cur);
            cur = cur->next;
        }

        cur = headB;
        while (cur) {
            if (s.find(cur) != s.end()) {
                return cur;
            }
            cur = cur->next;
        }
        return nullptr;
    }
};