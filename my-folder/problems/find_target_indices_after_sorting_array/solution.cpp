class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>lst;
        sort(nums.begin(),nums.end());
        int ct=0;
        for(auto i:nums)
        {
            if(i==target)
                lst.push_back(ct);
            ct++;
        }
        return lst;
    }
};