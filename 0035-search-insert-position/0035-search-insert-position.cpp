class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        int mid=0;
        int first=0;
        int last=nums.size()-1;
        while(first<=last)
        {
            mid=(last+first)/2;
            if(target<nums[mid])
            {
                last=mid-1;
            }
            
            else if(target==nums[mid])
            return mid;
            else
            first=mid+1;


        }
        for( i=0;i<nums.size()-1;i++)
        {
            if(target<nums.at(i+1)&&target>nums.at(i))
            return i+1;
        }
        if(target>nums.back())
        return i+1;
        else 
        return 0;
    }
};