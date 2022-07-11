class Solution {
public:
    bool issafe(int col, int row, vector<string>board, int n)
    {
        int rowdup=row;
        int coldup=col;
        while(row>=0 and col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row--;
            col--;
        }
        row=rowdup;
        col=coldup;
        while(col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            col--;
        }
        col=coldup;
        while(row<n and col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int col,int n, vector<string>board,vector<vector<string>>&ans)
    {
        if(col==n)
        {
            ans.push_back(board);
            return ;
        }
        for(int row=0;row<n;row++)
        {
            if(issafe(col,row,board,n))
            {
                board[row][col]='Q';
                solve(col+1,n,board,ans);
                board[row][col]='.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;
        solve(0,n,board,ans);
        /*set<vector<string>>t;
        for(auto i:ans)
            t.insert(i);
        */
        return ans.size();
        
        
        
        
    }
};