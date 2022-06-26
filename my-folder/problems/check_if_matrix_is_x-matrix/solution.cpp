class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
       
        //cout<<"yo"<<endl;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(i==j or i+j==grid.size()-1)
                {
                    if(grid[i][j]!=0)
                        continue;
                    else
                        return false;
                }
                else if(i!=j)
                {
                    //cout<<grid[i][j]<<endl;
                    if(grid[i][j]==0)
                        continue;
                    else
                        return false;
                }
            }
        }
        return true;
        
    }
};