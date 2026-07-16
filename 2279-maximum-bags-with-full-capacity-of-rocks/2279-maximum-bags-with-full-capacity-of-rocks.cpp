class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int a) {
        int res = 0;
        int n = c.size();
        vector<int> m;
        for (int i = 0; i < n; i++) {
            m.push_back(c[i] - r[i]);
        }
        sort(m.begin(),m.end());

        for (int i = 0; i < n; i++) {
            a = a - m[i];
             if (a >= 0)
                res++;
            if(a<0)break;
           
        }
        return res;
    }
};