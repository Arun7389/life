class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);

        unordered_set<int> p1;
        unordered_set<int> p2;
        for(auto val:nums1)
        {
            p1.insert(val);
        }
        for(auto val:nums2)
        {
            p2.insert(val);
        }

     

        for(auto val:p1)
        {
            if(p2.find(val)==p2.end())
            {
                ans[0].push_back(val);
            }
        }
        for(auto val:p2)
        {
            if(p1.find(val)==p1.end())
            {
                ans[1].push_back(val);
            }
        }
        return ans;



        
    }
};