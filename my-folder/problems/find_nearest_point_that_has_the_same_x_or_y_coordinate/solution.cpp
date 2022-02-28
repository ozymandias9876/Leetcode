class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int dst=INT_MAX;
        int a,b;
        for(auto i:points)
        {
            if(x==i[0] || y==i[1])
            {
                if(dst>(abs(x-i[0])+abs(y-i[1])))
                {a=i[0];
                b=i[1];
                dst=min(dst,abs(x-a)+abs(y-b));
                }
                dst=min(dst,abs(x-a)+abs(y-b));
            }
        }
        cout<<a<<" "<<b<<"\n";
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==a and points[i][1]==b)
                return i;
        }
        return -1;
    }
};