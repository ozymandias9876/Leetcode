class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum=0;
        long long maxm=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxm)
                maxm=nums[i];
            sum+=nums[i];
        }
        cout<<sum;
        return (maxm*(maxm+1)/2)-sum;
    }
};