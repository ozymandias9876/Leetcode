class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sms=0;
        for(int i=0,j=nums.size()-1;i<j;i++,j--)
        {
            sms=max(sms,nums[i]+nums[j]);
        }
        return sms;
    }
};