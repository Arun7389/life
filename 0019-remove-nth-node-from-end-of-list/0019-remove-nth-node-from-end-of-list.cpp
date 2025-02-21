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
         int co=0,i=0;
        ListNode *p=NULL;
        ListNode *temp=NULL;
        for(p=head;p!=NULL;p=p->next)
        co++;
        if(co==n)
        {
            head=head->next;
            return head;
        }
        for(p=head,i;i<co-n-1;i++,p=p->next);
        temp=p->next;
        p->next=temp->next;
        delete temp;
        return head;
        
    }
};