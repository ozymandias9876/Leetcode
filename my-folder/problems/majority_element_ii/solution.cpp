class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     unordered_map<int,int>umap;
        int n=nums.size();
        for(auto i:nums)
            umap[i]++;
        vector<int>v;
        for(auto i:umap)
        {
            if(i.second>n/3)
                v.push_back(i.first);
        }
        return v;
    }
};