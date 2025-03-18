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
    ListNode* sortList(ListNode* head) {
        
    vector<int> arr;
    for(ListNode *p=head;p!=NULL;p=p->next)
    {
        arr.push_back(p->val);
    }
    sort(arr.begin(),arr.end());
    int i=0;
    for(ListNode *p=head;p!=NULL;p=p->next,i++)
    {
        p->val=arr[i];
    }
    return head;

        
        
    }
};