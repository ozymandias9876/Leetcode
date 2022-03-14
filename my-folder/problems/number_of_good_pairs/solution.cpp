class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        int ct=0;
        for(auto i:nums)
            mp[i]++;
        for(auto i:mp)
        {
           int x=i.second;
            ct+=(x)*(x-1)/2;
        }
        return ct;
    }
};