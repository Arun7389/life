/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr)return false;
        ListNode *slow=head,*fast=head;
        while(1)
        {
            if( fast==nullptr ||fast->next==NULL)return false;
           slow=slow->next;
           fast=fast->next->next;
           if(slow==fast)return true;


        }
        return false;
        
        
    }
};