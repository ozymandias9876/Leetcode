class Solution {
public:
    int countAsterisks(string s) {
        
        int st=0;
        int x=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='|')
            {
                x++;
                continue;
            }
            if(x%2==0)
            {
                if(s[i]=='*')
                    st++;
                
            }
        }
        return st;
        
    }
};