// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long long i=1;
        long long l=n;
        int mid=0;
        while(i<=l)
        {
            mid=(i+l)/2;
            if(isBadVersion(mid)&& isBadVersion(mid-1)==false)
            {
                return mid;
                
            }
            else if(isBadVersion(mid)&& isBadVersion(mid-1))
            {
                l=mid-1;
                
            }
            else if(!isBadVersion(mid))
                i=mid+1;
            
                
        }
        return mid;
        
    }
};