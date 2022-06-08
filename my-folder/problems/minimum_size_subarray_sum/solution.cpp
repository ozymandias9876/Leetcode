class Solution {
    
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int startwindow=0;
        int mnm=0;
        int length=INT_MAX;
        
       for(int i=0;i<nums.size();i++)
       {
           mnm+=nums[i];
           while(mnm>=target)
           {
               length=min(length,i-startwindow+1);
               mnm-=nums[startwindow];
               startwindow++;
           }
       }
        return length==INT_MAX?0:length;
        
    }
};