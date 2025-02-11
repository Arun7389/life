class Solution {
public:
    int mySqrt(int x) {
        if(x==0)return 0;
        if(x==1)return 1;
               long long i;

        for( i=1;i<x/2;i++)
        {
            if(x==i*i)
            return i;
            if(x>i*i && x<(i+1)*(i+1))
            break;
        }
        return i;
    }
};