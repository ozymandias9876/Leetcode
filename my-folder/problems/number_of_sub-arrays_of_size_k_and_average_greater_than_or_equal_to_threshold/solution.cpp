class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int startwindow=0;
        int windowsum=0;
        int maxn=0;
        for(int endwindow=0;endwindow<arr.size();endwindow++)
        {
            windowsum+=arr[endwindow];
            if(endwindow>=k-1)
            {
                if((windowsum/k)>=threshold)
                    maxn++;
                windowsum-=arr[startwindow];
                startwindow++;
                
            }
        }
        return maxn;
    }
};