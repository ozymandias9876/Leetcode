class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v;
        long long sum=0;
        for(auto i: nums)
        {
            sum+=i;
            v.push_back(sum);
        }
        return v;
    }
};