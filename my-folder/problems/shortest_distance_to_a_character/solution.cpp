class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>v;
        for(int i=0;s[i]!='\0';i++)
        {
            int x=INT_MAX;
            int curr=INT_MAX;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==c)
                {
                    curr=min(abs(j-i),curr);
                    x=min(curr,x);
                    
                    
                }
            }
            v.push_back(x);
        }
        return v;
    }
};