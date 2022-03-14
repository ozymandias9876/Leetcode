class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool checki=true;
        bool checkd=true;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
                checki=false;
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
                checkd=false;
        }
        return checki||checkd;
    }
};