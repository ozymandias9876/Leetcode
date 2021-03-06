class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>p(stones.begin(),stones.end());
        while(p.size()>1)
        {
            int x=p.top();
            p.pop();
            int y=p.top();
            p.pop();
            p.push(abs(x-y));
        }
        return p.empty()?0:p.top();
    }
        
};