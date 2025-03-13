class Solution {
public:

    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0,left=0;
        long product=1;
        for(int i=0;i<nums.size();i++)
        {
            product*=nums[i];
            while(product>=k&&left<=i)
            {
                product/=nums[left++];
            }
            count+=(i-left+1);


        }
        return count;

        
    }
};