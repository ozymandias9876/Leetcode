class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>mp;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    
                    mp.push_back(make_pair(j,i));
                    
                }
            }
        }
        for(auto i:mp)
        {
            for(int a=0;a<matrix[0].size();a++)
            {
                matrix[i.second][a]=0;
            }
            for(int a=0;a<matrix.size();a++)
            {
                matrix[a][i.first]=0;
            }
            
        }
    }
};