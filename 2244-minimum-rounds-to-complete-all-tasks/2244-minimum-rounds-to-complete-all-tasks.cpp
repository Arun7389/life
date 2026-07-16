class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> mp;
        for (auto val : tasks) {
            mp[val]++;
        }
        int res = 0;
        for (auto p : mp) {
            if(p.second==1)return -1;
            if (p.second % 3 == 0) {
                res+= p.second / 3;

            } else if (p.second % 3 == 1) {
                int n=p.second/3;
                n=n-1;
                res=res+n+2;

            } else {
                res += p.second / 3;
                res++;
            }
        }
        return res;
    }
};