class Solution {
public:
    int maximum69Number (int n) {
        if(n == 9999)return n;
        vector<int> vec;

        
        int r=1000;
        while(n)
        {
            vec.push_back(n/r);
            n=n%r;
            r/=10;

        }
        for(auto i=0;i<vec.size();i++)
        {
            if(vec[i]==6)
            {
                vec[i]=9;
                break;

            }
        }
        int ans=vec[0]*10;
        for(auto i=1;i<vec.size();i++)
        {
            ans+=vec[i];
            ans*=10;

        }
        return ans/10;

        
    }
};