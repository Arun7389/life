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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* BST(vector<int> arr,int left,int right)
    {
        if(left > right)return NULL;
        TreeNode *r=new TreeNode();
        int mid=(left + right)/2;
        r->val=arr[mid];
        r->left=BST(arr,left,mid-1);
        r->right=BST(arr,mid+1,right);
        return r;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> arr;
        for(ListNode *p=head;p!=NULL;p=p->next)arr.push_back(p->val);
        TreeNode *root=BST(arr,0,arr.size()-1);
        return root;
        
        
    }
};