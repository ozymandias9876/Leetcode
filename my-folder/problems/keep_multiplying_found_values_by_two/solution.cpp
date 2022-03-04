class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        
        while(true)
        {
            if(mp[original])
                original*=2;
            else
                break;
        }
        return original;
    }
};