class Solution {
public:
   static bool checkno(string s)
    {
        return atoi(s.c_str());
    }
    int calPoints(vector<string>& ops) {
       vector<int>v;
        int j=0;
        for(int i=0;i<ops.size();i++)
        {
            if(checkno(ops[i]))
            {
                
                v.push_back(stoi(ops[i]));
                //cout<<v[v.size()-1];
                //j++;
            }
            if(ops[i]=="C")
            {
                v.pop_back();
                
            }
            if(ops[i]=="D")
            {
                int x=v[v.size()-1];
                
                
                x*=2;
                v.push_back(x);
            }
            if(ops[i]=="+")
            {
                int x=v[v.size()-1];
                //v.pop_back();
                int y=v[v.size()-2];
                //v.pop_back();
                //v.push_back(x);
                //v.push_back(y);
                v.push_back(x+y);
            }
        }
        long long sum=0;
        for(auto i:v)
        {
            //cout<<i<<endl;
            sum+=i;
        }
       // cout<<stoi("-10");
        return sum;
    }
};