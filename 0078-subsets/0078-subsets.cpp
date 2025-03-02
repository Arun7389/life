class Solution {
public:
    

 void  sub(vector<int>& nums, int i, vector<int>& ans,vector<vector<int>>& s) {
        if (i == nums.size()) {
            s.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
         sub(nums, i + 1, ans,s);
        ans.pop_back();
         sub(nums, i + 1, ans,s);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> s;
        sub(nums, 0, ans,s);
        return s;
    }
};