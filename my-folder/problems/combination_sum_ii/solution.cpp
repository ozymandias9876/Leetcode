class Solution {
public:
    static void csum2(int ind,int curr,int target,vector<int>candidates,vector<int>&ds,vector<vector<int>>&ans)
    {
        
    if(curr==target)
    {
        ans.push_back(ds);
        return ;
    }
        for(int i=ind;i<candidates.size();i++)
        {
            if(i>ind and candidates[i]==candidates[i-1])continue;
            if(curr>target)
                break;
            ds.push_back(candidates[i]);
            curr+=candidates[i];
            csum2(i+1,curr,target,candidates,ds,ans);
            ds.pop_back();
            curr-=candidates[i];
        }
        
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        
        vector<vector<int>>s;
        csum2(0,0,target,candidates,ds,s);
        for(auto i:ds)
            cout<<i<<endl;
        
        return s;
        
    }
};