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
    ListNode* ans = NULL;
    void solve(ListNode* head, ListNode* prev){
        if(head->next == NULL){
            head->next = prev;
            ans = head;
            return;
        }
        solve(head->next, head);
        
        head->next = prev;

    }

    ListNode* reverseList(ListNode* head) {
        if(head == NULL)return head;
        
        solve(head,NULL);
        return ans;
    }
};