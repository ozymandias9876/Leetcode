class Solution {
public:
    void sortColors(vector<int>& nums) {
    int ct0=0;
     int ct1=0;
        int ct2=0;
        for(auto x:nums)
        {
            if(x==0)
                ct0++;
            if(x==1)
                ct1++;
            if(x==2)
                ct2++;
        }
        for(int i=0;i<ct0;i++)
        {
            nums[i]=0;
        }
        for(int i=ct0;i<ct0+ct1;i++)
        {
            nums[i]=1;
        }
        for(int i=ct0+ct1;i<ct0+ct1+ct2;i++)
        {
            nums[i]=2;
        }
    }
};