class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       vector<int>v;
        
        sort(potions.begin(),potions.end());
        bool t=false;
        for(int i=0;i<spells.size();i++)
        {
            t=false;
            long long val=0;
            int low=0;
            int high=potions.size()-1;
            int mid=0;
            int first=0;
            while(low<=high)
            {
                mid=low+(high-low)/2;
                if((long long)spells[i]*(long long)potions[mid]>=success)
                {
                    t=true;
                    first=mid;
                    high=mid-1;
                }
                else if((long long)spells[i]*(long long)potions[mid]>success)
                {
                    high=mid-1;
                }
                else
                    low=mid+1;
            }
            if(!t)
                v.push_back(0);
            else
                v.push_back(potions.size()-first);    
        }
                return v;
    
        }
    
};