class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int s=INT_MAX,l=INT_MIN;
        vector<int> ans;
        unordered_set<int> p;

        for(auto val:nums)
        {
            if(p.find(val)!=p.end())
            {
                continue;

            }
            p.insert(val);
            
            if(val<s)s=val;
            if(val>l)l=val;
        }
        for(int i=s;i<l;i++)
        {
            if(p.find(i)==p.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};