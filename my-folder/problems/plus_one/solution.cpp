class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int l=digits.size()-1;l>=0;l--)
        {
            if(digits[l]<9)
                
            {   digits[l]++;
                return digits;
             }
            else
            {
                digits[l]=0;
            }
        }
        digits[0]=1;
        digits.push_back(0);
        return digits;
        
    }
};