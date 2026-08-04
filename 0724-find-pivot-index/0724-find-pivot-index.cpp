class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixsum(n,0);
        for(int i=1;i<n;i++)
        {
            prefixsum[i]=prefixsum[i-1]+nums[i-1];
        }
        vector<int> rightsum(n,0);

        for(int i=n-2;i>=0;i--)
        {
            rightsum[i]=rightsum[i+1]+nums[i+1];
        }

        for(int i=0;i<n;i++)
        {
            if(prefixsum[i]==rightsum[i])return i;
        }

        return -1;

        
        
    }
};