class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
      long long x=floor(log2(n));
      long long y=ceil(log2(n));
        //cout<<x<<" "<<y;
      if(x==y)
          return true;
        return false;
        
        
    }
};