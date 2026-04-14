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
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* cur = head;
        while (cur) {
            arr.push_back(cur->val);
            cur = cur -> next;
        }

        int len = arr.size();
        for (int i = 0; i < len/2 + 1; i++) {
            int j = len - i - 1;
            if (arr[i] != arr[j]) return false;
        }

        return true;
    }
};