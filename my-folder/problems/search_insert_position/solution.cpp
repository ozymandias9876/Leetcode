class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int l=nums.size()-1;
        int mid=0;
        while(i<=l)
        {
            mid=(i+l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                l=mid-1;
            else
                i=mid+1;
        }
        return l+1;
        
        
    }
};