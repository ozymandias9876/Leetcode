class Solution {
    private:
    int SieveOfEratosthenes(int n)
{
    
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    int ct=0;
    for (int p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true)
        {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
        for(int i=2;i<n;i++)
        {
            if(prime[i])
                ct++;
        }
        return ct;
 
    
}
public:
    int countPrimes(int n) {
       int count=SieveOfEratosthenes(n);
        return count;
    }
};