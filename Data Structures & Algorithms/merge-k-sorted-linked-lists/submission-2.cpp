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
        return divide(lists,0,lists.size()-1);
    }
private:
    ListNode* divide(vector<ListNode*>& lists, int l, int r) {
        if (l>r) {
            return nullptr;
        }
        if (l==r) {
            return lists[l];
        }
        int mid=l+(r-l)/2;
        ListNode* left=divide(lists,l,mid);
        ListNode* right=divide(lists,mid+1,r);

        return merge(left,right);
    }
    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode dummy(0);
        ListNode* curr=&dummy;
        while (left && right) {
            if (left->val>right->val) {
                curr->next=right;
                right=right->next;
            }
            else {
                curr->next=left;
                left=left->next;
            }
            curr=curr->next;
        }
        if (left) {
            curr->next=left;
        }
        else {
            curr->next=right;
        }
        return dummy.next;
    }
    
};
