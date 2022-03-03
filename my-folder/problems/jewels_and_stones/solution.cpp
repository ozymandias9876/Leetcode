class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>mp;
        for(auto i:jewels)
            mp[i]++;
        int ct=0;
        for(auto i:stones)
           { if(mp[i]>0)
                ct++;
            }
        return ct;
    }
};