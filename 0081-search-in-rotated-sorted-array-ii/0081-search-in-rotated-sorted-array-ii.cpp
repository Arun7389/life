class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int l=0,r=nums.size()-1;
        for(int i=1;i<=r;i++)
        {
            if(nums[i-1]==target)return true;
            if(!(nums[i-1]<=nums[i])){
                l=i;
                break;
            }
        }
        while(l<=r)
        {
            int mid=r+(l-r)/2;

            if(nums[mid]==target)return true;
            else if(nums[mid]<target)l=mid+1;
            else r=mid-1;
        }
        return false;

        
    }
};