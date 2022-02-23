class Solution {
public:
   static bool cmp(pair<int,int>x,pair<int,int>y)
   {
        return x.second>y.second;
   }
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        for(auto i:arr)
            mp[i]++;
        vector<pair<int,int>>v;
        for(auto i:mp)
            v.push_back(i);
        sort(v.begin(),v.end(),cmp);
        int ct=0;
        int sz=arr.size();
        int hlf=0;
        for(auto i:v)
        {
            ct++;
            hlf+=i.second;
            if(hlf>=sz/2)
                return ct;
        }
        return 0;
        
    }
};