class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> x;
        sort(nums.begin(),nums.end());

        x.push_back(nums);
        //sv.insert(nums);
        set<vector<int>>s;
        while(next_permutation(nums.begin(),nums.end()))
            s.insert(nums);
        for(auto i:s)
        {
            x.push_back(i);
                
        }
        return x;
    }
};