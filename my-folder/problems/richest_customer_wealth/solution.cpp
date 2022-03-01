class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxm=0;
        int curr=0;
        for(auto i: accounts )
        {
            int sum=0;
            
           for(auto x:i)
              sum+=x;
            curr=max(curr,sum);
            maxm=max(curr,maxm);
        }
        return maxm;
    }
};