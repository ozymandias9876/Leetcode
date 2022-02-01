class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int l=nums.size()-1;
        int mid=0;
            while(i<=l)
            {
                mid=(i+l)/2;
                if(nums[mid]==target)
                    return mid;
                else if(nums[mid]<target)
                    i=mid+1;
                else
                    l=mid-1;
            }
        return -1;
        
    }
};