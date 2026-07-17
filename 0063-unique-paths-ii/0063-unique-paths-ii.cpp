class Solution {
public:
int dp[101][101];
int solve(int i, int j, int m ,int n,vector<vector<int>>& obstacleGrid)
{
    if(i>=m || j>=n )return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(i==m-1 && j==n-1)
    {
        return 1;
    }
    
    if(obstacleGrid[i][j]==1)
    {
        return 0;
    }
    int right=solve(i,j+1,m,n,obstacleGrid);
    int down=solve(i+1,j,m,n,obstacleGrid);
    return dp[i][j]=right+down;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp,-1,sizeof(dp));
        if(obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1] || obstacleGrid[0][0])return 0;
        return solve(0,0,obstacleGrid.size(),obstacleGrid[0].size(),obstacleGrid);

        
    }
};