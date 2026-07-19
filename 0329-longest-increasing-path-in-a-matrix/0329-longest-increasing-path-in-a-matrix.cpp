class Solution {
public:
    int n, m;
    int dp[201][201];
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};
    int dfs(vector<vector<int>>& matrix, int i, int j,
            vector<vector<bool>>& vis) {
        if (dp[i][j]!=-1)
            return dp[i][j];
      
        int ans = 1;
        for (int k = 0; k < 4; k++) {
            int x = i + dx[k];
            int y = j + dy[k];
            if (x >= m || x < 0 || y >= n || y < 0)
                continue;

            if (matrix[x][y] > matrix[i][j]) {
                ans = max(ans, 1 + dfs(matrix, x, y, vis));
            }
        }
        return dp[i][j] = ans;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m = matrix.size();
        n = matrix[0].size();
        memset(dp, -1, sizeof(dp));
        vector<vector<bool>> vis(m, vector<bool>(m, false));
        int ans;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                

                    ans = max(ans, dfs(matrix, i, j, vis));
                
            }
        }
        return ans;
    }
};