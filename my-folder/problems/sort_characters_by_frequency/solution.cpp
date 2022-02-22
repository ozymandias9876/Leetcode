class Solution {
public:
  static  bool cmp(pair<char,int>a,pair<char,int>b)
    {
        return a.second>b.second;
    }
    string frequencySort(string s) {
        string y;
        map<char,int>mp;
        vector<pair<char,int>>sv;
        for(auto i:s)
            mp[i]++;
        for(auto &it:mp)
            sv.push_back(it);
        sort(sv.begin(),sv.end(),cmp);
        for(auto i:sv)
        {
            while(i.second--)
                y+=i.first;
        }
        return y;
        
    }
};