class Solution {
public:
    int percentageLetter(string s, char letter) {
        int ct=0;
        for(auto i:s)
        {
            if(i==letter)
                ct++;
        }
       // cout<<ct<<endl;
        return (ct*1.0/s.length()*1.0)*100;
    }
};