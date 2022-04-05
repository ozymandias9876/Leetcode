class Solution {
public:
    int maxArea(vector<int>& height) {
        int first=0;
        int last=height.size()-1;
        int maxm=0;
        int ans=0;
        while(first<last)
        {
            if(height[first]<=height[last])
            {
                ans=height[first]*(last-first);
                first++;
            }
            else
            {
                ans=height[last]*(last-first);
                last--;
            }
            maxm=max(maxm,ans);
        }
        return maxm;
    }
};