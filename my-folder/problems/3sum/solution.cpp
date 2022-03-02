class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        if(nums.size()<3)
            return v;
        sort(nums.begin(),nums.end());
                set<vector<int>>g;

        
            for(int i=0;i<nums.size()-2;i++)
            {
                int a=nums[i];
                int start=i+1;
                int end=nums.size()-1;
                vector<int>x;
                while(start<end)
                {
                    int b=nums[start];
                    int c=nums[end];
                    if(a+b+c==0)
                    {
                        x={a,b,c};
                        //v.push_back(x);
                        g.insert(x);
                        start++;
                        end--;
                    }
                    else if(a+b+c>0)
                        end--;
                    else
                        start++;
                }
                if(x.size()==3)
                    g.insert(x);
            }
        for(auto i:g)
            v.push_back(i);
        
        return v;
       
            
     
          
    }
};