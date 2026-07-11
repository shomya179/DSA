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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        if(head==NULL||head->next==NULL)return head;
        int xx=1;
        while(temp->next!=NULL){
      xx++;
      temp=temp->next;
        }
        k=k%xx;
        if(k==0)return head;
        ListNode *slow=head,*fast=head;
        while(k>0){
            fast=fast->next;
            k--;
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=head;
       head=slow->next;
       slow->next=NULL;

    return head;}
};