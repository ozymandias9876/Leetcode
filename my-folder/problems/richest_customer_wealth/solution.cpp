class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxsum=0;
        int sum=0;
        for(auto x:accounts)
        {
            for(auto y:x)
            {
                sum+=y;
            }
            maxsum=max(maxsum,sum);
            sum=0;
        }
        return maxsum;
            
    }
};