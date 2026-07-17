class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1)return "";
        string s="";
        int i=1,n=palindrome.size()/2;
        int j=palindrome.size();

        if(palindrome[0]!='a')
        {
            palindrome[0]='a';
            return palindrome;
        }
       else 
       { while(i<n)
        {
            if(palindrome[i]=='a')
            i++;
            else {
                palindrome[i]='a';
               return palindrome;
            }
            

        }
       
       }
        palindrome[j-1]='b';

       return palindrome;
    }
    
};