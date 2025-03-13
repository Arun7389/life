class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct=nums[0],minproduct=nums[0],result=nums[0];
       
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)swap(maxproduct,minproduct);
            maxproduct=max(nums[i],nums[i]*maxproduct);
            minproduct=min(nums[i],nums[i]*minproduct);
            result=max(result,maxproduct);
        }
        return result;
        
    }
};