class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr=INT_MAX;
        int prof=0;
        for(int i=0;i<prices.size();i++)
        {
            curr=prices[i]<curr?prices[i]:curr;
            prof=prices[i]-curr>prof?prices[i]-curr:prof;
        }
        //cout<<curr<<endl;
        return prof;
    }
};