class Solution {
public:

    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> a,ans;

        int co=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                a.push_back(grid[i][j]);
            }
            
        }
        int n=grid.size();
        for(int i=1;i<=n*n;i++)
        {
            co=0;
            for(int j=0;j<a.size();j++)
            {
                if(i==a[j])co++;
            }
            if(co==2)ans.push_back(i);
            
        }
        for(int i=1;i<=n*n;i++)
        {
            co=0;
            for(int j=0;j<a.size();j++)
            {
                if(i==a[j])co++;
            }
            if(co==0)ans.push_back(i);
            
        }
        
        return ans;
        
        
    }
};