class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int z=pref.size();
        int ct=0;
        for(auto i:words)
        {
            int ct1=0;
            if(i.size()<z)
                continue;
            for(int x=0;x<z;x++)
            {if(i[x]==pref[x])
                ct1++;
              }
              if(ct1==z)
                ct++;
        }
              return ct;
        
    }
};