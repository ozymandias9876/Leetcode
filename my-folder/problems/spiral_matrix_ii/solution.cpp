class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>matrix(n,vector<int>(n,0));
        int ct=1;
        
        vector<vector<int>>spiral(n);
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
                {
                    matrix[top][i]=ct;
                    ct++;
                }
                top++;
                dir=2;
                
            }
            else if(dir==2)
            {
                for(int i=top;i<=down;i++)
                {matrix[i][right]=ct;
                    ct++;
                }
                right--;
                dir=3;
            }
            else if(dir==3)
            {
                for(int i=right;i>=left;i--)
                {
                    matrix[down][i]=ct;
                    ct++;
                }
                down--;
                dir=4;
            }
            else if(dir=4)
            {
                for(int i=down;i>=top;i--)
                {
                    matrix[i][left]=ct;
                    ct++;
                }
                left++;
                dir=1;
            }
            
            
        }
        
        
            
        return matrix;
        
    }
};