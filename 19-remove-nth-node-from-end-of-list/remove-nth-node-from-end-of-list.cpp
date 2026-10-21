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
        if(head==NULL)return head;
        int i=0;
        ListNode* t=head;
        while(t!=NULL){
            i++;
            t=t->next;
        }
    n = i - n;

        if (n == 0) {
        ListNode* target = head;
        head = head->next;
        delete target;
        return head;
    }
         t=head;
        while(n>1){
            n--;
            t=t->next;
        }
        ListNode* target=t->next;
        t->next=target->next;
        delete target;
        return head;
    }
};