class Solution {
public:
void perm(vector<int> &nums,vector<vector<int>>& s,int i)
{
    if(i==nums.size())
    {
        if(find(s.begin(),s.end(),nums)==s.end())
        s.push_back(nums);
        return ;
    }
    else
    {
    for(int j=i;j<nums.size();j++)
    {
        
        swap(nums[i],nums[j]);
        perm(nums,s,i+1);
        swap(nums[i],nums[j]);
        
    }
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> s;
        s.clear();
        perm(nums,s,0);
        return s;
        
    }
};