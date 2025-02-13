class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int co=0;
       for(int i=s.size();i>=0;i--)
       {
        if(s[i]==' '&&(s[i+1]=='\0'||s[i+1]==' '))
        {
            continue;
        }
        else if(s[i]==' ') break;
        else co++;
       }
       return co-1;
    }
};