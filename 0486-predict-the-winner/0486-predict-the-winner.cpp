class Solution {
public:
int dp[21][21];
int fun(vector<int>& nums,int l,int r)
{
     if(l==r)return nums[l];
    if(dp[l][r]!=-1)return dp[l][r];
   

    int left=nums[l]-fun(nums,l+1,r);
    int right=nums[r]-fun(nums,l,r-1);
return dp[l][r]=max(left,right);


}
    bool predictTheWinner(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return fun(nums,0,nums.size()-1)>=0;
        
    }
};