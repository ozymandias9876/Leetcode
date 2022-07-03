class Solution {
public:
    static void subs(int i,vector<int>nums,vector<int>&ds,vector<vector<int>>&ans)
    {
        
        
            ans.push_back(ds);
            
        
        for(int ind=i;ind<nums.size();ind++)
        {
            if(ind>i and nums[ind]==nums[ind-1])
                continue;
            
            
                ds.push_back(nums[ind]);
                subs(ind+1,nums,ds,ans);
                ds.pop_back();
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>a;
        sort(nums.begin(),nums.end());
        subs(0,nums,a,ans);
        return ans;
    
    }
};