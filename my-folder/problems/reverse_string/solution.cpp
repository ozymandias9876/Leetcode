class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0,l=s.size()-1;i<l;i++,l--)
        {
            swap(s[i],s[l]);
        }
    }
};