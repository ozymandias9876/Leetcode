class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());
        int e=0;
        int o=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                nums[i]=even[e];
                e++;
            }
            else
            {
                nums[i]=odd[o];
                o++;
            }
        }
        return nums;
        
    }
};