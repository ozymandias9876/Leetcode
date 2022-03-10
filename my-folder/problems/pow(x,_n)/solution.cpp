class Solution {
public:
    double myPow(double x, int n) {
        long long t=n;
        int z=1;
        if(t==0)
            return 1;
        if(t==1)
            return x;
    if(t<0)
    {
        z*=-1;
        t*=z;
    }
    double res=myPow(x,t/2);
    if(t&1)
    {
        if(z==-1)
        {
            return 1.0/(res*res*x);
        }
        else
            return res*res*x;
    }
    else
    {
        if(z==-1)
        {
            return 1.0/(res*res);
        }
        else
            return res*res;
    }
        return res;
        
    }
};