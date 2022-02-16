class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        for(int i=1;i<=500001;i++)
        {if(mp[i]==0)
                return i;
        }
        return -1;
    }
};