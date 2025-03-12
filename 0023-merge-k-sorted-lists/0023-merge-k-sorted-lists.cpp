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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head=NULL;
        vector<int> arr;
        for(int i=0;i<lists.size();i++)
        {
            for(ListNode *p=lists[i];p!=NULL;p=p->next)
            {
                arr.push_back(p->val);
            }
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            
            ListNode *temp=new ListNode(arr[i]);
            if(head==NULL)
            {
                head=temp;
                temp->val=arr[i];
                temp->next=NULL;
            }
            else
            {
                ListNode *p=NULL;
                for(p=head;p->next!=NULL;p=p->next);
                p->next =temp;
                temp->val=arr[i];
                temp->next=NULL;
            }
        }
        

return head;

        
    }
};