class Solution {
public:
int n;
int dp[50001];
int func(vector<int>& nums,int i)
{
    if(i>=n)return 0;
    if(dp[i]!=-1)return dp[i];
    int t1,t2=INT_MIN,t3=INT_MIN;
     t1=nums[i]-func(nums,i+1);
    if(i+1<n)
     t2=nums[i]+nums[i+1]-func(nums,i+2);
    if(i+2<n)
     t3=nums[i]+nums[i+1]+nums[i+2]-func(nums,i+3);
    return dp[i]=max(max(t1,t2),t3);
}
    string stoneGameIII(vector<int>& stoneValue) {
        n=stoneValue.size();
        memset(dp,-1,sizeof(dp));
        int ans=func(stoneValue,0);
        if(ans>0)return "Alice";
        else if(ans==0)return "Tie";
        else
        return "Bob";
        
    }
};