class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> umap;
        vector<int>v;
        for(auto i:nums)
            umap[i]++;
        int i=1;
        while(i<=nums.size())
        {
            if(umap[i]==0)
                v.push_back(i);
            i++;
        }
        return v;
    }
};