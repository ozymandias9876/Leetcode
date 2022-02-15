class Solution {
public:
    int trailingZeroes(int n) {
        int number=0;
        while(n)
        {
            number+=n/5;
            n/=5;
        }
        return number;
    }
};