class Solution {
public:
    static void csub(int i,vector<int>&ds,int curr,int target,vector<int>candidates,vector<vector<int>>&st)
    {
        if(i>=candidates.size())
        {
            if(curr==target)
            {
                st.push_back(ds);
            }
            return;
        }
        if(curr>target)
            return ;
        ds.push_back(candidates[i]);
        curr+=candidates[i];
        csub(i,ds,curr,target,candidates,st);
        ds.pop_back();
        curr-=candidates[i];
        csub(i+1,ds,curr,target,candidates,st);
        
  
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>st;
        csub(0,ds,0,target,candidates,st);
        return st;
    }
};