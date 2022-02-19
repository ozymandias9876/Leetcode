class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    if(nums.size()==1)
        return 0;
    for(int i=1;i<nums.size()-1;i++)
    {
        if(nums[i]>nums[i-1] and nums[i]>nums[i+1])
            return i;
    }
    int mn=INT_MIN;
    int ind=0;
    for(int i=0;i<nums.size();i++)
    {   if(nums[i]>mn)
            ind=i;
        mn=max(mn,nums[i]);
    }
        return ind;
    
    }
};