class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ct;
        for(int i=0;i<=n;i++)
        {
            int temp=i;
            int co=0;
            while(temp)
            {
                temp=temp&(temp-1);
                co++;
            }
            ct.push_back(co);
        }
        return ct;
    }
};