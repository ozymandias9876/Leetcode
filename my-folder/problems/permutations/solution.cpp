class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>pm;
        
        sort(nums.begin(),nums.end());
        pm.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
            pm.push_back(nums);
        //sort(pm.begin(),pm.end());
        return pm;
    }
};