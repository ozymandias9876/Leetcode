class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size()>=8)
        {
            bool spc=false;
            bool lc=false;
            bool uc=false;
            bool dgt=false;
            for(int i=0;i<password.size()-1;i++)
            {
                if(password[i]==password[i+1])
                    return false;
            }
            for(auto j: password)
            {
                
                if(islower(j))
                {
                    lc=true;
                }
                if(isupper(j))
                    uc=true;
                if(isdigit(j))
                {
                    dgt=true;
                }
                if(j=='!' or j=='@' or j=='#' or j=='$' or j=='%' or j=='^' or j=='&' or j=='*' or j=='(' or j==')' or j=='-' or j=='+')
                    spc=true;
            }
            if(spc and lc and uc and dgt)
                return true;
            else
                return false;
        }
        return false;
    }
};