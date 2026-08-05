class Solution {
public:
    void dfs(unordered_map<int, vector<int>>& adj, int u, vector<bool>& vis)
    {
        if(vis[u]) return;

        vis[u] = true;

        for(auto v : adj[u])
        {
            dfs(adj, v, vis);
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {

        unordered_map<int, vector<int>> adj;
        vector<bool> vis(n, false);
        vector<int> ans;

        
        for(auto &e : invocations)
        {
            adj[e[0]].push_back(e[1]);
        }

        dfs(adj, k, vis);

        
        for(auto &e : invocations)
        {
            int u = e[0];
            int v = e[1];

            if(!vis[u] && vis[v])
            {
                
                for(int i = 0; i < n; i++)//sorry frnds i took help of gpt for hints and explaination of question
                    ans.push_back(i);

                return ans;
            }
        }

        
        for(int i = 0; i < n; i++)
        {
            if(!vis[i])
                ans.push_back(i);
        }

        return ans;
    }
};