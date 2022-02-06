class Solution {
public:
    long long smallestNumber(long long num) {
        int sign=0;
        if(num<0)
        {
            sign=-1;
            num*=sign;
            vector<int>v;
            while(num)
            {
                long long rem=num%10;
                v.push_back(rem);
                num/=10;
            }
            sort(v.begin(),v.end(),greater<int>());
            long long x=0;
            for(auto y:v)
            {
                x=x*10+y;
            }
            return x*sign;
        }
        else if(num>0)
        {
            sign=1;
            num*=sign;
            vector<long long>w;
            long long zc=0;
            while(num)
            {
                long long rem=num%10;
                
                w.push_back(rem);
                num/=10;
            }
            
            sort(w.begin(),w.end());
            for(int i=0;i<int(w.size());i++)
            {
                if(w[i]!=0)
                    break;
                zc++;
            }
            long long z=0;
            z=w[zc];
            long long temp=zc;
            
            while(temp--)
            {
                z=z*10+0;
            }
            for(long long i=zc+1;i<w.size();i++)
            {
                z=z*10+w[i];
            }
            return z*sign;
        }
        return 0;
        
    }
};