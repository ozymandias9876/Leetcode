class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
       int top=0;
        int down=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        int dir=1;
        while(top<=down and left<=right)
        {
            if(dir==1)
            {
                for(int i=left;i<=right;i++)
                    v.push_back(matrix[top][i]);
                top++;
                dir=2;
                
            }
            else if(dir==2)
            {
                for(int i=top;i<=down;i++)
                    v.push_back(matrix[i][right]);
                right--;
                dir=3;
            }
            else if(dir==3)
            {
                for(int i=right;i>=left;i--)
                {
                    v.push_back(matrix[down][i]);
                }
                down--;
                dir=4;
            }
            else if(dir=4)
            {
                for(int i=down;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                }
                left++;
                dir=1;
            }
            
            
        }
        return v;
        
    }
};