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
    ListNode* removeNodes(ListNode* head) {
        // ListNode* temp = head;
        // deque<int>st;
        // st.push_back(temp->val);
        // temp=temp->next;
        // while(temp!=NULL){
        //     while(st.size()>=1 && st.back() < temp->val){
        //         st.pop_back();
        //     }
        //     st.push_back(temp->val);
        //     temp = temp->next;
        // }
        // head->val = st.front();
        // st.pop_front();
        // temp = head->next;
        // ListNode* head1 = head;
        // while(st.size()>0){
        //     if(temp->val == st.front()){
        //         head1->next = temp;
        //         st.pop_front();
                
        //         head1 = head1->next;
               
        //     }
        //     temp = temp->next;
        // }
        // head1->next = NULL;
        // return head;

        if(head->next == NULL){
            return head;
        }
        ListNode* temp = removeNodes(head->next);

        if(temp->val > head->val)
        return temp;

        head->next = temp;
        return head;
    }
};