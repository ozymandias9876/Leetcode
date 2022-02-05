class Solution {
public:
    int minimumSum(int num) {
        vector<int>v(4,0);
        
        int i=0;    
        while(num)
            {
                int rem=num%10;
                v[i]=rem;
                num/=10;
                i++;
            
            }
        sort(v.begin(),v.end());
        return (v[0]*10+v[3])+(v[1]*10+v[2]);
        
        
        
        
        
    }
};