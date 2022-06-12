class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double tx=0;
        int val=min(brackets[0][0],income);
        income-=val;
        tx=(val*brackets[0][1])*1.0/100.0;
        for(int i=1;i<brackets.size();i++)
        {
            if(income<=0)
            {
                break;
            }
            else if(income>0)
            {
              val=min(brackets[i][0]-brackets[i-1][0],income);
              income-=val;
              tx+=(val*brackets[i][1])*1.0/100.0;
            }
        }
        return tx;
    }
};