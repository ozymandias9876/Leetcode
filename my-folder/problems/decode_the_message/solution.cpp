class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char>mp;
        
        char c='a';
       for(int i=0;i<key.size();i++)
       {
           if(mp.find(key[i])==mp.end() and key[i]!=' ')
           {
               mp[key[i]]=c;
               c++;
           }
           else
               continue;
       }
        string s;
        for(auto i:message)
        {
            if(mp.find(i)!=mp.end())s+=mp[i];
            else
                s+=' ';
        }
        return s;
        
    }
};