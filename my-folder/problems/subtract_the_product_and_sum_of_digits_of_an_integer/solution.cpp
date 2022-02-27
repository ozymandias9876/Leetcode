class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        while(n)
        {
            int rem=n%10;
            sum+=rem;
            prod*=rem;
            n/=10;
        }
        //cout<<prod<<" "<<sum;
        return prod-sum;
    }
};