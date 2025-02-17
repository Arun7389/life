class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,r=arr.size()-1;
        int m=INT_MIN,store;
        while(l<=r)
        {
            m = max({m, arr[l], arr[r]});

            if(m==arr[l])store=l;
            if(m==arr[r]) store=r;
            l++;
            r--;

        }
        return store;

    }
};