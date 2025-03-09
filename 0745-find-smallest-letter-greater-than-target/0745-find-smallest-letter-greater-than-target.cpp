class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left=0,right=letters.size()-1,mid=0;
        
        {
            while(left<= right)
            {
                mid=left + (right - left)/2;
                
                 if(letters[mid] > target) right=mid-1;
                else
                left=mid+1;
            }
        }
        return letters[left%letters.size()];
        


    }
};