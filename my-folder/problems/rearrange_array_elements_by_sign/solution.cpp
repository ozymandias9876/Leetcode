class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                odd.push_back(nums[i]);
            if(nums[i]>0)
                even.push_back(nums[i]);
        }
        vector<int>fn(nums.size(),0);
        int i=0;
        int j=0;
        for(int x=0;x<fn.size(),j<odd.size(),i<even.size();x++)
        {
            if(x&1)
            {
                fn[x]=odd[j];
                j++;
            }
            
            else if(!(x&1)){
                fn[x]=even[i];
                i++;
            }
            
        }
        if(i==even.size())
        {
            while(j<odd.size())
            {
                fn[i+j]=odd[j];
                j++;
            }
        }
        if(j==odd.size())
        {
            while(i<even.size())
            {
                fn[i+j]=even[i];
                i++;
            }
        }
        return fn;
    }
};