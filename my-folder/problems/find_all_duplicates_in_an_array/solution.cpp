class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        vector<int>y;
        for(auto i:mp)
        {
            if(i.second==2)
                y.push_back(i.first);
        }
        return y;
        
    }
};