class Solution {
public:
    static void func(int i,int k,int n,vector<int>&ds,vector<vector<int>>&x)
    {
        if(i>n)
        {
            if(ds.size()==k)
            {
                x.push_back(ds);
            }
            return ;
        }
        if(ds.size()>k)
            return ;
        ds.push_back(i);
        func(i+1,k,n,ds,x);
        ds.pop_back();
        func(i+1,k,n,ds,x);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        vector<int>ds;
        vector<vector<int>>x;
        
        func(1,k,n,ds,x);
        return x;
        
    }
};