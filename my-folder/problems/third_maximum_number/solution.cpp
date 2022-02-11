class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        set<int>n;
        for(auto i:nums)
            n.insert(i);
        vector<int>x;
        for(auto i:n)
            x.push_back(i);
        
        sort(x.begin(),x.end(),greater<int>());
        if(x.size()<3)
            return x[0];
        else
            return x[2];
        
    }
};