class Solution {
public:
    int climbStairs(int n) {
     int fib[45]={0};
        fib[0]=1;
        fib[1]=2;
        for(int i=2;i<45;i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
        }
        return fib[n-1];
    }
};