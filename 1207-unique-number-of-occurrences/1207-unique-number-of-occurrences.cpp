class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_set<int> v;
        for (auto val : arr) {
            mp[val]++;
        }
        for (auto p : mp) {
            if (v.find(p.second) != v.end()) {
                return false;
            }
            v.insert(p.second);
        }
        return true;
    }
};