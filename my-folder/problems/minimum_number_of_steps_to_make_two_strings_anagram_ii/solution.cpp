class Solution {
public:
    bool check(string s,string t)
    {
        int arr[27]={0};
        for(auto i:s)
            arr[i-'a']++;
        for(auto i:t)
            arr[i-'a']--;
        for(auto i:arr)
        {if(i!=0)
                return false;
        }
        return true;
    }
    int minSteps(string s, string t) {
        map<char,int>ump;
        int ct=0;
        if(check(s,t))
            return 0;
        for(auto i:s)
            ump[i]++;
        for(auto i:t)
            ump[i]--;
        for(auto i:ump)
        {
            if(i.second!=0)
            {
                if(i.second<0)
                {
                    ct+=(i.second*-1);
                }
                else
                    ct+=i.second;
                //cout<<i.second<<"\n";
            }
        }
        return ct;
       
        
    }
};