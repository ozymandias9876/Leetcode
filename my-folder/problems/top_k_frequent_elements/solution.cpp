class Solution {
public:
   static bool cmp(pair<int,int>x,pair<int,int>y)
    {
        return x.second>y.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        
        for(auto i:nums)
            umap[i]++;
        vector<pair<int,int>>v;
        for(auto i:umap)
        {
            v.push_back(make_pair(i.first,i.second));
        }
        sort(v.begin(),v.end(),cmp);
        vector<int>x;
        int i=0;
        while(k--)
        {
            x.push_back(v[i].first);
            i++;
        }
            return x;
    }
};