class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(m<(nums[i]-1)*(nums[j]-1))
                {
                    m=(nums[i]-1)*(nums[j]-1);
                }

            }
        }
        return m;
        
    }
};