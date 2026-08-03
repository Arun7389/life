class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int a=0,b=0;
        bool pass=true;

        for(auto val:piles)
        {
            if(pass)
            {
                a+=val;
                
            }
            else
            b+=val;
            pass=~pass;
        }
        return a>b?true:false;
        
    }
};