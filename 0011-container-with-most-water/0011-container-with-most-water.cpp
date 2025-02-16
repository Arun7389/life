class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int w,h,m=0;
        while(l<r)
        {
            w=r-l;
             h=min(height[l],height[r]);
             m=max(m,w*h);
             height[l]<height[r] ? l++:r--;

        }
        return m;
        
    }
};