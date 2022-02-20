class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>umap;
        if(nums.size()==0)
            return 0;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]=i;
        }
        int curr=1;
        int maxm=1;
        int val=0;
        for(auto i:umap)
        {
            val=i.first;
            break;
        }
        
        for(auto i:umap)
        {
           if(val==i.first)
           {
            val=i.first;    
            continue;
           }
            
            if(val+1==i.first)
            {
                val=i.first;
                curr++;
                maxm=max(maxm,curr);
            }
            else if(val+1!=i.first)
            {curr=1;
            val=i.first;
            }
        }
        return maxm;
    }
};