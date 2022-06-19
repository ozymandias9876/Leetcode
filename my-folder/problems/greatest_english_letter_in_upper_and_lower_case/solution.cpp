class Solution {
public:
    string greatestLetter(string s) {
        map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        string mpx="";
        for(auto i:s)
        {
            if(i>='A' and i<='Z')
            {
                if(mp[i+32]>0)
                {
                    string z="";
                    z+=i;
                    mpx=mpx>z?mpx:z;
                }
            }
        }
        return mpx;
        
    }
};