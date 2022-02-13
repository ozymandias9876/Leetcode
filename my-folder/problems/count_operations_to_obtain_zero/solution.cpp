class Solution {
public:
    int countOperations(int m, int n) {
        int ct=0;
        while(m!=0 and n!=0)
        {
            int temp=m;
            int temp2=n;
            if(m>=n)
                m-=n;
            else
                n-=m;
            ct++;
            
        }
        return ct;
 
    

    }
};