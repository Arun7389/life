class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string st="";
        
        do
        {
            st=st + word1[i] +word2[j];
            i++;
            j++;
        }while(i <word1.size() && j<word2.size());
        
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