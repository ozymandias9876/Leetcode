class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string x="";
            for(auto i:s)
            {
                if(isalnum(i))
                    x+=i;
            }
        string y=x;
        for(int i=0,j=x.size()-1;i<j;i++,j--)
            swap(x[i],x[j]);
        if(y==x)
            return true;
        return false;
    }
};