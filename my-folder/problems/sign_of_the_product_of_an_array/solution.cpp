class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ct=0;
        int x=0;
        for(auto i:nums)
        {
            if(i<0)
                ct++;
            if(i==0)
                x++;
        }
        if((ct&1) and x==0)
            return -1;
        if(x>0)
            return 0;
        if(!(ct&1))
            return 1;
        return 1;
        
    }
};