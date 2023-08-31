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
    vector<int> nextLargerNodes(ListNode* head) {
        map<ListNode*,int>mp;
        ListNode* temp = head;
        stack<ListNode*>st;
        while(temp!=NULL){
            mp[temp]=0;
            while(!st.empty() && st.top()->val < temp->val){
                mp[st.top()]=temp->val;
                st.pop();
            }
            st.push(temp);
            temp = temp->next;
        }
        vector<int>ans;
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};