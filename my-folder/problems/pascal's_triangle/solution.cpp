class Solution {
public:
   
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>v;
        vector<int>x={1};
        v.push_back(x);
        x={1,1};
        v.push_back(x);
        x={1,2,1};
        v.push_back(x);
        for(int i=2;i<30;i++)
        {
            vector<int>z;
            z.push_back(1);
            vector<int>t=v.back();
            for(int i=0;i<t.size()-1;i++)
            {
                int sum=t[i]+t[i+1];
                z.push_back(sum);
            }
            z.push_back(1);
            v.push_back(z);
        }
        vector<vector<int>>final;
        for(int i=0;i<numRows;i++)
        {
            final.push_back(v[i]);
        }
        return final;
    }
};