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

ListNode* rev(ListNode* head){
    ListNode *prev=NULL,*curr=head,*next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
ListNode* iat(ListNode* head,int s){
    if(head==NULL){
        head = new ListNode(s);
        return head;
    }
    ListNode* ptr=head;
    while(head->next!=NULL){
        head=head->next;
    }
    ListNode* tail = new ListNode(s);
    head->next = tail;
    return ptr;
    
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = NULL;
        int flag=0;
        while(1){
            
            int data=0;
            if(l1!=NULL){
                data+=l1->val;
            }
            if(l2!=NULL){
                data+=l2->val;
            }
            if(flag)
                data++;
            
            if(data>9){
                flag=1;
                data=data-10;
            }
            else
                flag=0;
            ans=iat(ans,data);
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
            if(l1==NULL && l2==NULL){
                if(flag==1)
                    ans=iat(ans,1);
                break;
            }
        }
       //ans=rev(ans);
        return ans;
    }
};