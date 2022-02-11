class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
               vector<int>v;
        int i=0;
        int j=0;
        int m=nums1.size();
        int n=nums2.size();
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

        if((m+n)%2==0)
        {
            int x=(m+n)/2;
            double y=(v[x-1]+v[x])*1.0/2.0;
            return y;
        }
        else
        {
            double y=v[(m+n)/2];
            return y;
        }
        return -1;
    }
};