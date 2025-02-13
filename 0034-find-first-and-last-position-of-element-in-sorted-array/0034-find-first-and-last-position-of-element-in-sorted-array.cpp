class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> n={-1,-1};
        bool a= false;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]==target &&a==false)
           {
            n[0]=i;
            a=true;
           }
           if(nums[i]==target && a==true)
           {n[1]=i;}

        }
        return n;
        
    }
};