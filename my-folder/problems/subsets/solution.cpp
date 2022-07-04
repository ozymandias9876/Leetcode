class Solution {
public:
    static void subset(int i,vector<int>arr,vector<int>&ds,vector<vector<int>>&ans)
    {
        ans.push_back(ds);
        for(int ind=i;ind<arr.size();ind++)
        {
            if(ind>i and arr[ind]==arr[ind-1])
                continue;
            ds.push_back(arr[ind]);
            subset(ind+1,arr,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vs;
        //sort(nums.begin(),nums.end());
        vector<int>x;
        subset(0,nums,x,vs);
        return vs;
        
    }
};