class Solution {
public:
    double myPow(double x, int n) {
        long bf=n;
        double ans=1;
        if(x==0)return 0;
        if(x==1 || n==0 || x==-1 && n%2==0)return 1;
        if(x==-1 && n%2)return -1; 
        if(n<0)
        {
            bf=-bf;
            x=1/x;
        }
        
        while(bf>0)
        {
          if(bf%2==1)
          {
            ans=ans*x;
          }
          x*=x;
          bf/=2;
        }
        return ans;
        
    }
};