class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pocount=0,negcount=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)continue;
            nums[i]>0 ? pocount++:negcount++;
        }
        return max(pocount,negcount);
        
    }
};