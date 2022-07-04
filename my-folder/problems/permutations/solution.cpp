class Solution {
public:
    static void perm(int arr[],vector<int>nums,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(arr[i]==0)
            {
                ds.push_back(nums[i]);
                arr[i]=1;
                perm(arr,nums,ds,ans);
                ds.pop_back();
                arr[i]=0;
                
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>pm;
        int arr[nums.size()];
        fill_n(arr,nums.size(),0);
        vector<int>ds;
        perm(arr,nums,ds,pm);
        return pm;
    }
};