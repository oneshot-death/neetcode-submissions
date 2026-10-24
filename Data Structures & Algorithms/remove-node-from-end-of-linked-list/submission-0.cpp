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
        int total=0;
        ListNode *curr=head;
        while (curr) {
            total=total+1;
            curr=curr->next;
        }
        int beg=total-n+1;

        if (beg==1) {
            return head->next;
        }
        int curr_count=0;
        ListNode* curr_final=head;
        ListNode* prev=nullptr;
        while (curr_final && curr_count!=beg-1) {
            curr_count+=1;
            prev=curr_final;
            curr_final=curr_final->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};
