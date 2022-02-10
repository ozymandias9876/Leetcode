class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        long long x=0;
        long long ct=0;
        for(auto i:mp)
        {
            if(i.second>ct)
            {
                ct=i.second;
                x=i.first;
            
            }
        }
        return x;
    }
};