class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v;
            if(k>nums.size())
                k=k%nums.size();
        int ct=nums.size()-k;
        for(int i=ct;i<nums.size();i++)
        {
            v.push_back(nums[i]);
        }
        for(int i=0;i<ct;i++)
            v.push_back(nums[i]);
        nums=v;
        
        
            
        
    }
};