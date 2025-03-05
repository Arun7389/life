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
    bool isPalindrome(ListNode* head) {
        ListNode *p=nullptr;
        vector<int> a;
       
        for(p=head;p!=NULL;p=p->next)
        {
            a.push_back(p->val);

        }
        int left=0,right=a.size()-1;
        while(left < right)
        {
           if(a[left]!=a[right])
           return 0;
           left ++;
           right--;
        }
        return 1;
        
        
    }
};