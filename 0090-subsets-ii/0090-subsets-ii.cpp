class Solution {
public:
    void ps(vector<int>& nums, vector<int>& ans, vector<vector<int>>& withoutdup,
            int i) {
        if (i == nums.size()) {
            withoutdup.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        ps(nums, ans, withoutdup, i + 1);
        ans.pop_back();
        int index = i + 1;
        while (index < nums.size() && nums[index] == nums[index-1]) {
            index++;
        }
        
        ps(nums, ans, withoutdup, index);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> withoutdup;
        ps(nums, ans, withoutdup, 0);
        return withoutdup;
    }
};