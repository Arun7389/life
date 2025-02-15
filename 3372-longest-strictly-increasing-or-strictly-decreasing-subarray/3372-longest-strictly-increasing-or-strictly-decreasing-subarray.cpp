class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size()==1)
        return 1;
        int m1=1,m2=1,m=INT_MIN;
for(int i=0;i<nums.size()-1;i++)
{
    if(nums[i]>nums[i+1])
    {m1++;
    m2=1;
    m=max(m,m1);}
    else if(nums[i]<nums[i+1])
    {
        m2++;
        m1=1;
        m =max(m,m2);
    }
    else 
    {m1=1;m2=1;
    m=max(m,m1);}
}

    return m;
}
};