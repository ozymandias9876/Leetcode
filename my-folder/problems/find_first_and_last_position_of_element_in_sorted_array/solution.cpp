class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int>v;
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        int res;
       bool flag=false;
        
        
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(nums[mid]==target)
            {
                res=mid;
                high=mid-1;
                flag=true;
                
            }
            
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        if(!flag)
            v.push_back(-1);
        else
            v.push_back(res);
        flag=false;
        low=0;
        high=nums.size()-1;
        mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(nums[mid]==target)
            {
                res=mid;
                low=mid+1;
                flag=true;
                
            }
           
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        if(!flag)
            v.push_back(-1);
        else
            v.push_back(res);
        
        
        
        return v;
        
        
    }
};