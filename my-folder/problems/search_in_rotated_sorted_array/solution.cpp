class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int n=nums.size();
        int right=nums.size()-1;
        int mid=0;
        int pivot=0;
        while(left<=right)
        {
            
            if(nums[left]<nums[right])
            {
                pivot=left;
                break;
            }
            mid=left+(right-left)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(nums[mid]<=nums[next] and nums[mid]<=nums[prev])
            {
                pivot=mid;
                break;
            }
            else if(nums[left]<=nums[mid])
            {
                left=(mid+1)%n;
            }
            else
            {
                right=(mid-1)%n;
            }
        }
        
        int lf=-1;
        int rf=-1;
        int sl=0;
        int el=pivot-1;
        int midl=0;
        while(sl<=el)
        {
            
            midl=sl+(el-sl)/2;
            if(nums[midl]==target)
            {
                lf=midl;
                break;
            }
            else if(nums[midl]<target)
            {
                sl=midl+1;
            }
            else
                el=midl-1;
        }
        int sr=pivot;
        int er=n-1;
        int midr=0;
        while(sr<=er)
        {
            midr=sr+(er-sr)/2;
            if(nums[midr]==target)
            {
                rf=midr;
                break;
            }
            else if(nums[midr]<target)
            {
                sr=midr+1;
            }
            else
                er=midr-1;
                
        }
        return max(lf,rf);
        
        
    }
};