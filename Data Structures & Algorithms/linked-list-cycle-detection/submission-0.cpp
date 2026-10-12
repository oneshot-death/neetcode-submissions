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
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> seen;
        ListNode *cur=head;
        while (cur) {
            if (seen.find(cur)!=seen.end()) { //this would mean the hash pointer
                return true; //never returned to the end indicating that
                //it is visiting an old node
            }
            seen.insert(cur);
            cur=cur->next;
        }
        return false;
    }
};
