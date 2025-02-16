class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&& s[i]<='Z'||s[i]>='0'&&s[i]<='9')
            s1.push_back(tolower(s[i]));
            

        }
        
       
        int left=0,right=s1.length()-1;
        while(left<right)
        {
            if(s1[left]!=s1[right])
            return false;
            left++;
            right--;

        }
        return true;
    }
};