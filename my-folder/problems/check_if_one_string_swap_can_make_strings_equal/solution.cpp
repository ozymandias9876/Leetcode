class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int a,b;
        bool ax=false;
        bool bx=false;
        vector<int>v;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i] )
                v.push_back(i);
        }
        if(v.size()>1)
        {
        swap(s1[v[0]],s1[v[1]]);
        }
        if(s1==s2)
            return true;
        return false;
    }
};