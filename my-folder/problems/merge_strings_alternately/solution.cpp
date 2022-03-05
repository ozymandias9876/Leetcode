class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string s;
        int i=0,j=0;
        while(i<word1.size() and j<word2.size())
        {
            s+=word1[i];
            s+=word2[j];
            i++;
            j++;
        }
        if(i==word1.size())
        {
            for(j;j<word2.size();j++)
                s+=word2[j];
            
        }
        else if(j==word2.size())
        {
            for(i;i<word1.size();i++)
                s+=word1[i];
            
        }
        return s;
    }
};