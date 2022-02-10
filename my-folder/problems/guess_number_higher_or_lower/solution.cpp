/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long l=0;
        long long h=n;
        long long mid=0;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(guess(mid)==0)
                return mid;
            else if(guess(mid)==1)
                l=mid+1;
            else
                h=mid-1;
        }
        return 0;
    }
};