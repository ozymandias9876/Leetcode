class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto i:matrix)
        {
            for(auto x:i)
            {
                if(x==target)
                    return true;
            }
        }
        return false;
    }
};