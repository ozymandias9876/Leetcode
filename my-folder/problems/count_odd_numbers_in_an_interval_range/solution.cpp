class Solution {
public:
    int countOdds(int low, int high) {
        int n=(high-low)/2;
        if((high&1) || (low&1))
            return n+1;
        return n;
    }
};