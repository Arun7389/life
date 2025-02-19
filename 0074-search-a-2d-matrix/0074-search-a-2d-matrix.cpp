class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;
        int right=m*n-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            int midvalue=matrix[mid/n][mid%n];
            if(midvalue==target)return true;
            else if(midvalue<target)left=mid+1;
            else right=mid-1;
        }
        return 0;
        
        
    }
};