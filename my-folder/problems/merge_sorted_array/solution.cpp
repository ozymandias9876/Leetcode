class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       vector<int>v;
        int i=0;
        int j=0;
        while(i<m and j<n)
        {
            if(nums1[i]<nums2[j])
            {v.push_back(nums1[i]);
                i++;
            }
            else
            {v.push_back(nums2[j]);
             j++;
             }
        }
        if(i==m)
        {
            while(j<n)
            {
                v.push_back(nums2[j]);
                j++;
            }
        }
        else
        {
            while(i<m)
            {
                v.push_back(nums1[i]);
                i++;
            }
        }
        for(int i=0;i<m+n;i++)
        {
            nums1[i]=v[i];
        }
        
        
    }
};