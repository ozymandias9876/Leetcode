class Solution {
public:

static void perm(int ind,vector<int>nums,vector<vector<int>>&ans)
{
    if(ind==nums.size())
    {
        ans.push_back(nums);
    }
    for(int i=ind;i<nums.size();i++)
    {
        if(i>ind and nums[i]==nums[ind])
            continue;
        swap(nums[i],nums[ind]);
        perm(ind+1,nums,ans);
        //swap(nums[i],nums[ind]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> x;
        sort(nums.begin(),nums.end());
        
        perm(0,nums,x);
        return x;
    }
};