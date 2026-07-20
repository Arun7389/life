class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans(n,vector<int>(m));
        vector<int> shift(n*m);;
        k%=(n*m);
        int p=k;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(p==n*m)
                {
                    p=0;
                }
                shift[p++]=grid[i][j];

            }
        }
        p=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[i][j]=shift[p++];
            }
        }
        return ans;
        
    }
};