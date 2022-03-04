class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int>mp;
        string s="abcdefghijklmnopqrstuvwxyz";
        for(auto i:sentence)
            mp[i]++;
        for(auto i:s)
        {if(mp[i]==0)
            return false;
        }
        return true;
        
        
    }
};