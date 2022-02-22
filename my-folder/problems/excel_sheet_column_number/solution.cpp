class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num=0;
        for(auto i:columnTitle)
        {
            num=num*26+(i-'A'+1);
        }
        return num;
    }
};