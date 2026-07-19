class Solution {
public:

    int minimumObstacles(vector<vector<int>>& grid) {
        vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(), false));
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        int ans = INT_MAX;
       priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>
        > q;
        q.push({grid[0][0],{0,0}});
        while (!q.empty()) {

            int val = q.top().first;
            int i = q.top().second.first;
            int j = q.top().second.second;
            q.pop();
            if (i == grid.size() - 1 && j == grid[0].size() - 1) {
                return val;
            }
            for (int k = 0; k < 4; k++) {
                int x = i + dx[k];
                int y = j + dy[k];
                if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size()) {
                    continue;
                }
                if (!vis[x][y]) {
                    vis[x][y] = true;
                    q.push({val + grid[x][y], {x, y}});
                }
            }
        }
        return ans;
    }
};