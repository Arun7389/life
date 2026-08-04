class Solution {
public:
int m,n;

void fill(vector<vector<int>>& ans,int r,int c)
{
    
    for(int i=0;i<n;i++)
    {
        ans[r][i]=0;
    }
    for(int i=0;i<m;i++)
    {
        ans[i][c]=0;
    }

}
    void setZeroes(vector<vector<int>>& matrix) {
         m=matrix.size();
         n=matrix[0].size();
        
        vector<pair<int,int>> mp;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    mp.push_back({i,j});
                }

            }
        }
        for(auto p:mp)
        {
            fill(matrix,p.first,p.second);
        }
        
    }
};