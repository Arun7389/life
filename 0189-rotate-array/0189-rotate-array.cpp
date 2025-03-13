class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1)return;
        vector<int> arr;
        int n=nums.size();
        if(k>=n){
            k%=n;
            

        }
        int i=n-k;
        
        for( i=n-k;i<n;i++)
        {
            arr.push_back(nums[i]);
        }
        for(int j=0;j<i;j++)
        {
            arr.push_back(nums[j]);
        }
        for(int j=0;j<n;j++)
        {
            nums[j]=arr[j];
        }

        
    }
};