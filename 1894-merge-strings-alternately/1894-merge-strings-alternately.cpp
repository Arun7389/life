class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n,i=0,j=0;
        string st="";
        word1.size()<word2.size() ? n=word1.size():n=word2.size();
        do
        {
            st=st + word1[i] +word2[j];
            i++;
            j++;
        }while(i !=n && j!=n);
        
            while(j!=word2.size())
            {
                st+=word2[j];
                j++;
            }
       
             while(i!=word1.size())
            {
                st+=word1[i];
                i++;
            }

        
        return st;

    }
};