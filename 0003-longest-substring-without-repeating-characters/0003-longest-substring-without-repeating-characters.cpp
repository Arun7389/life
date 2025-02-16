class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1)return 1;
        int m=0;
        string st="";
        for(int i=0;s[i]!='\0';i++)
        {
            if(st.find(s[i])!=string::npos)
            {
                m=max(m,(int)st.length());
                st.erase(0,st.find(s[i])+1);
            }
            st=st+s[i];
        }
        return max(m, (int)st.length());
        
    }
};