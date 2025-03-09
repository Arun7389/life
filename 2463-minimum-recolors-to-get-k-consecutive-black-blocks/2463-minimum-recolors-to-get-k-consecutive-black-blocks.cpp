class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        deque<char> st(blocks.begin(), blocks.begin() + k);
        int  co = 0;
        
        
        if(blocks.size() == k)
        {
             for (char c : st) {
            if (c == 'W') co++;
        }
        return co;

        }
        co=0;
        for (char c : st) {
            if (c == 'W') co++;
        }
        int m=co;
        
        
        
        for (int i = 1; i < blocks.size()- k + 1; i++) {
            if(st.front()=='W')co--;
            st.pop_front();

            st.push_back(blocks[i + k - 1]);
            if(st.back()=='W')co++;
            
            
            m = min(m, co);
        }
        
        return m;
    }
};