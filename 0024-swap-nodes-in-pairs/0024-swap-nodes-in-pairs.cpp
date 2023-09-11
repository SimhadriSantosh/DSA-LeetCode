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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)return head;

        ListNode *curr= head,*nxt = head->next;
        int temp;
        while(curr->next!=NULL){
            nxt = curr->next;
            temp = nxt->val;
            nxt->val = curr->val;
            curr->val = temp;
            if(nxt->next!=NULL)
            curr = nxt->next;
            else break;
        }
        return head;
    }
};