class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
                
        
       int i=0;
        int j=nums.size()-1;
        int x=0;
        while(i<=j)
        {
            if(nums[i]==val)
            {
                if(nums[j]!=val)
                {
                    swap(nums[i],nums[j]);
                    x++;
                }
                else
                    j--;
            }
            else
                i++;
        }
        return i;
    
    }
};