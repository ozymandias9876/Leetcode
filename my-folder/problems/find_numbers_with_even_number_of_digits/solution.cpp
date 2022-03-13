class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ct=0;
        for(auto i:nums)
        {
            int x=0;
            x=floor(log10(i)+1);
            if(!(x&1))
                ct=ct+1;
        }
        return ct;
    }
};