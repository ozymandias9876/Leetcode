class Solution {
public:
    int minBitFlips(int start, int goal) {
        int y=start^goal;
        int ct=0;
        while(y)
        {
            y&=(y-1);
            ct++;
        }
        return ct;
        
    }
};