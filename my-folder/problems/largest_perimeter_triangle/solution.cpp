class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int a,b,c;
        bool possible=true;
        for(int i=0,j=1,k=2;i<=nums.size()-3,j<=nums.size()-2,k<nums.size();i++,j++,k++)
        {
            a=nums[i];
            b=nums[j];
            c=nums[k];
            if(b+c>a)
            {
                possible=false;
                break;
            }
        }
        if(possible)
            return 0;
        return a+b+c;
        
        
    }
};