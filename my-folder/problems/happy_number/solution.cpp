class Solution {
public:
    bool isHappy(int n) {
        map<int,int>mp;
        bool check=true;
        
        while(check)
        {
            int sq=0;
            while(n)
            {
                int rem=n%10;
                sq+=pow(rem,2);
                n/=10;
            }
            if(sq==1)
                return true;
            else
                mp[sq]++;
            n=sq;
            
            if(mp[sq]>1)
                break;
            
        }
        return false;
    }
};