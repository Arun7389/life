class Solution {
public:
    string addBinary(string a, string b) {
        
        int n;
        if(a.length()<b.length())
        n=b.length();
        else n=a.length();
        int carry=0;
        string s="";
        while(a.length()<n){ a='0'+a;}
        while(b.length()<n){b='0'+b;}
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]=='1'&&b[i]=='1')
            {
                if(carry==0)
                {
                    s='0'+s;
                    carry=1;
                }
                else{
                    s='1'+s;;
                    carry=1;
                }
            }
            else if(a[i]=='0'&&b[i]=='1'||a[i]=='1'&&b[i]=='0')
            {
                if(carry==0)
                {
                    s='1'+s;
                    carry=0;
                }
                else
                {
                    s='0'+s;
                    carry=1;
                }
            }
            else {
                if(carry)
                {
                    s='1'+s;
                    carry=0;
                }
                else
                {
                    s='0'+s;
                }
            }
        }
        if(carry)
        {
            s='1'+s;
        }
        return s;
        
        
    }
};