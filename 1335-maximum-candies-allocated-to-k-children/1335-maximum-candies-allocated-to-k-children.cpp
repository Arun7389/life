class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum=0;
        for(int i=0;i<candies.size();i++)
        {
            sum+=candies[i];
        }
        if(sum<k)return 0;
        else if(sum==k)return 1;
        
        else
        {
            sort(candies.begin(),candies.end());
           int left=1,right=candies[candies.size()-1],result=0;
           while(left<=right)
           {
            int mid=left+(right-left)/2;
            long long count=0;
            for(int i=0;i<candies.size();i++)
            {
                count=count+candies[i]/mid;
            }
            if(count>=k)
            {
                result=mid;
                left=mid+1;

            }
            else
            {
                right=mid-1;
            }
           }
           return result;
        }
        
    }
};