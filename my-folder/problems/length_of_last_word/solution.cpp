class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream sd(s);
        string temp;
        int ct=0;
        while(sd>>temp)
        {
            ct=temp.size();
        }
        return ct;
    }
};