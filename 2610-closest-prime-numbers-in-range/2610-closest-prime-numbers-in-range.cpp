class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int m=INT_MAX;
        int fact=0;
        vector<int> ans({-1,-1});
        vector<bool> a(right+1,false);
        

        a[0]=a[1]=1;
        for(long i=2;i*i<=right;i++)
        {
            if(a[i]==0)
            {
            for(long  j=i*i;j<=right;j+=i)
            {
                
                a[j]=true;
            }
            }
        }
        vector<int> an;
        for(int i=left;i<=right;i++)
        {
            if(a[i]==0)an.push_back(i);

        }
        if(an.size()<2)return ans;
        for(int i=0;i<an.size()-1;i++)
        {
            int diff=an[i+1]-an[i];
            if(m>diff)
            {
                m=diff;
                ans={an[i],an[i+1]};

            }
            
        }

        return ans;
        
    }
};