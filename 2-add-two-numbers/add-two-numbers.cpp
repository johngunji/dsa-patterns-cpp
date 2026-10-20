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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1=l1;
        ListNode* h2=l2;
        ListNode* h3=nullptr;
        ListNode* temp=nullptr;
        int c=0;
        while(h1!=NULL || h2!=NULL||c != 0){
            int v=c;
            if(h1!=NULL){
                v+=h1->val;
                h1=h1->next;
            }
            if(h2!=NULL){
                v+=h2->val;
                h2=h2->next;
            }
            ListNode* node=new ListNode(v%10);
            c=v/10;
            if(h3==NULL){
                temp=node;
                h3=temp;
            }
            else{
               temp->next=node;
               temp=temp->next;
            }
        }
      return h3;
        
    }
};