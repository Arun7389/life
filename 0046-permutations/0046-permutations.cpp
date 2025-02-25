class Solution {
public:
    vector<vector<int>> s;
    void func(vector<int>& nums, int i, int n) {

        

        if (i == n) {
            s.push_back(nums);
            
            return ;

        } else {

            for (int j = i; j <=n; j++) {
                swap(nums[i], nums[j]);
                func(nums, i + 1, n);
                swap(nums[i], nums[j]);
            }
        }
    }

        vector<vector<int>> permute(vector<int> & nums) {
            s.clear();
            func(nums,0,nums.size()-1);
            return s;
        }
    };