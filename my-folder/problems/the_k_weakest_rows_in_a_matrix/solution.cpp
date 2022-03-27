class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int j=0;
        set<pair<int,int>>s;
        for(auto i:mat)
        {
            int ct=0;
            for(auto x:i)
            {
                if(x==1)
                    ct++;
            }
            s.insert(make_pair(ct,j));
            j++;
            
        }
        vector<int>v;
        int t=0;
        for(auto i:s)
        {
            if(t==k)
                break;
            v.push_back(i.second);
            t++;
        }
        return v;
        
        
    }
};