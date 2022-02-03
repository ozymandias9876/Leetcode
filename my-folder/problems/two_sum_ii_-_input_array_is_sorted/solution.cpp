class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int i=0;
         int l=nums.size()-1;

        vector<int>v;
        while(i<l)
        {
            if(nums[i]+nums[l]==target)
            {
                v.push_back(i+1);
                v.push_back(l+1);
                return v;
            }
            else if(nums[i]+nums[l]>target)
                l--;
            else
                i++;
        }
        return v;
    }
};