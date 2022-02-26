class Solution {
public:
    int binarys(vector<int>& nums,int mid,int left,int right,int target)
    {
        mid=(left+right)/2;
        
        if(nums[mid]==target)
            return mid;
        else if(left>=right)
            return -1;
        if(nums[mid]>target)
            return binarys(nums,mid,left,mid-1,target);
        if(nums[mid]<target)
            return binarys(nums,mid,mid+1,right,target);
        
        return -1;

    }
    int search(vector<int>& nums, int target) {
        int i=0;
        
        int l=nums.size()-1;
        
        int mid=0;
        return binarys(nums,mid,i,l,target);
        
            
        
    }
};