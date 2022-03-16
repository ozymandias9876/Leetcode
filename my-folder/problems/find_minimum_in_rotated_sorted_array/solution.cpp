class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int mid=0;
        int n=nums.size();
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[start]<nums[end])
                return nums[start];
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            
            if(nums[mid]<=nums[prev] and nums[mid]<=nums[next])
                return nums[mid];
            else if(nums[start]<=nums[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        return 0;
    }
};