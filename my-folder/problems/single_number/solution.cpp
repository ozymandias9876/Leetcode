class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        if(nums.size()==1)
            return nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            nums[i+1]=nums[i]^nums[i+1];
            
            x=nums[i+1];
        }
        return x;
        
    }
};