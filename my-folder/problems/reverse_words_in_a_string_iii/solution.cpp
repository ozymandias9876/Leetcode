class Solution {
public:
    string reverseWords(string s) {
       int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                int temp=i-1;
                //cout<<"BOO!"<<'\n';
                while(j<temp)
                {
                    swap(s[j],s[temp]);
                    j++;
                    temp--;
                    //cout<<"BOO!"<<'\n';
                }
                //swap(s[j],s[temp]);
                
                 j=i+1;
            }
           
            
            
            
        }
        string y=s.substr(j);
        for(int i=0,l=y.size()-1;i<l;i++,l--)
            swap(y[i],y[l]);
        for(int i=j,l=0;i<s.size(),l<y.size();i++,l++)
            s[i]=y[l];
        return s;
    }
};