class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        int x=floor(log10(n)/log10(4));
        int y=ceil(log10(n)/log10(4));
        if(x==y)
            return true;
        else
            return false;
        
    }
};