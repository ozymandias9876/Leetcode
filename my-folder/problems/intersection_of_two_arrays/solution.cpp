class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        vector<int>intersection;
        set<int>rem;
        while(i<nums1.size() and j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                rem.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
                i++;
            else
                j++;
        }
        for(auto x:rem)
            intersection.push_back(x);
        return intersection;
    }
};