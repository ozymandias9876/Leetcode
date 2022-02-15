class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(auto i:nums)
            umap[i]++;
        vector<int>v;
        for(auto i:umap)
        {
            if(i.second==1)
                v.push_back(i.first);
        }
        return v;
    }
};