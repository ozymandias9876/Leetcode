class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        string x="";
        bool sign=false;
        if(num<0)
        {sign=true;
        num*=-1;
        }
            
        while(num)
        {
            x+=to_string(num%7);
            num=num/7;
        }
        reverse(x.begin(),x.end());
        if(sign)
            return "-"+x;
        return x;
            
        
    }
};