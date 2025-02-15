class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<int> a;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=k)
            a.push_back(nums[i]);
        }
        return nums.size()-a.size();
    }
};