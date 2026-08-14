class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mp;
        int l=0,r=0;
        int ans=0;
        int n=s.size();

        while(l<=r && r<n)
        {
            
            

            while(r<n)
            {
               
                if(mp[s[r]]==2)
                {
                    
                    break;
                }
                mp[s[r]]++;
                 r++;
                
            }
            ans=max(ans,r-l);


            if(r<n){
            while(l<r && s[l]!=s[r])
            {
                
                mp[s[l]]--;
                l++;
            }
            mp[s[l]]--;
                l++;
            }


        }
        return ans;

        
    }
};