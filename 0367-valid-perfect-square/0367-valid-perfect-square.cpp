class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1 || num==0)return true;
        for(int i=2;i<=num/2;i++)
        {

            if((long)i*i==num)
            return true;
            if((long)i*i>num)break;
        }
        return false;
        
    }
};