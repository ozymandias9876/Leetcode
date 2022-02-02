class Solution {
public:
    bool isPalindrome(uint x) {
        if(x<0)
            return false;
        if(x==0)
            return true;
        uint n=x;
        uint pal=0;
        uint ct=floor(log10(x)+1);
        uint rem=0;
        uint vl=0;
        while(x)
        {
            rem=x%10;
            vl=pow(10,ct-1);
            vl*=rem;
            pal+=vl;
            x=x/10;
            ct--;
        }
       /* if(flag)
        {
            pal*=-1;
            n*=-1;
        }*/
        cout<<pal;
        if(n==pal)
            return true;
        else
            return false;
    }
};