class Solution {
public:
    bool isPowerOfThree(int n) {
    if(n<=0)
        return false;
    
    int x=floor(log10(n)/log10(3));
     int y=ceil(log10(n)/log10(3));
    //cout<<x<<y;    
    if(x==y)
            return true;
        return false;
    }
};