class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vs;
        int n=pow(2,nums.size());
        for(int i=0;i<n;i++)
        {
            vector<int>x;
            for(int j=0;j<nums.size();j++)
            {
                if(i&(1<<j))
                    x.push_back(nums[j]);
            }
            vs.push_back(x);
        }
        return vs;
        
    }
};