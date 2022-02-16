class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>sub;
        int n=pow(2,nums.size());
        for(int i=0;i<n;i++)
        {
            vector<int>x;
            for(int j=0;j<nums.size();j++)
            {
                if(i&(1<<j))
                    x.push_back(nums[j]);
            }
            sort(x.begin(),x.end());
            sub.push_back(x);
        }
        set<vector<int>>s;
        for(auto i:sub)
            s.insert(i);
        sub.clear();
        for(auto i:s)
            sub.push_back(i);
        return sub;
    }
};