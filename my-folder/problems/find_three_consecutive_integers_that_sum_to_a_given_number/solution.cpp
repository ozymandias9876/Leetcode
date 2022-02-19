class Solution {
public:
    vector<long long> sumOfThree(long long nums) {
        vector<long long>x;
        if(nums%3==0)
        {
            x.push_back(nums/3 -1);
            x.push_back(nums/3);
            x.push_back(nums/3+1);
        }
        return x;
        
    }
};