class Solution {
public:
   static bool cmp(string s,string y)
    {
        if(s.size()<y.size())
           return false;
       else if(y.size()<s.size())
           return true;
        
        else if(s.size()==y.size())
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]<y[i])
                    return false;
                else if(s[i]>y[i])
                    return true;
            }
        }
        return false;
        
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),cmp);
        /*for(auto i:nums)
            cout<<i<<'\n';*/
        return nums[k-1];
        
    }
};