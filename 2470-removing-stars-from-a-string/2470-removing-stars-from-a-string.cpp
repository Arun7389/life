class Solution {
public:
     
    string removeStars(string s) {
        stack<char> ch;
        
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='*')
            {
                if(!ch.empty())ch.pop();
            }
            else
            ch.push(s[i]);
        }
        vector<char> str;
        while(!ch.empty())
        {
            str.push_back(ch.top());
            ch.pop();
        }
        reverse(str.begin(),str.end());
       
        return string(str.begin(),str.end());
        
    }
};