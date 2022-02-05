class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> v (nums.size(),0);
        int pc=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                v[j]=nums[i];
                j++;
            }
        }
        for(auto x:nums)
        {
            if(x==pivot)
                pc++;
        }
        
        while(pc)
        {
            
            v[j]=pivot;
            j++;
            pc--;
            
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>pivot)
            {
                v[j]=nums[i];
                j++;
            }
        }
        return v;
    }
};