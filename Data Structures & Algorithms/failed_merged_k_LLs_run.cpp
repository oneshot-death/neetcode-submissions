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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) {
            return nullptr;
        }
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;

        while (true) {
            int minIndex=-1;
            int minVal=10001; //max value+1 possible
            for (int i=0;i<lists.size();i++) {
                if (lists[i]!=nullptr && minVal>lists[i]->val) {
                    minIndex=i;
                    minVal=lists[i]->val;
                }

            }

            if (minIndex==-1) {
                break;
            }

            curr->next=lists[minIndex];
            lists[minIndex]=lists[minIndex]->next;
            curr=curr->next;

        }
        return dummy->next;
    }
};
