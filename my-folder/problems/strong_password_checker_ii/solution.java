class Solution {
    public boolean strongPasswordCheckerII(String password) {
      char ch;
        int uppercase=0;
        int lowercase =0;
        int digit=0;
        int specialchar=0;
         boolean ans= false;
         if(password.length()<8)
            return false;
      for(int i=0; i<password.length(); i++)
      {   
           ch=password.charAt(i);
           int j=i+1;
        
        if(j<password.length())
          {
           // System.out.println(ch); 
            //System.out.println(password.charAt(j));
            if(ch == password.charAt(j))
                return false;
            System.out.println(ans);
          }
         
       
       
            if(Character.isDigit(ch))
               digit++;
           else if(Character.isUpperCase(ch))
               uppercase++;
           else if(Character.isLowerCase(ch))
              lowercase++;
           else if(!Character.isDigit(ch) && !Character.isLetter(ch) && !Character.isWhitespace(ch)) 
              specialchar++;
            
      }
       
         if((uppercase >0) && (lowercase >0) && (digit>0) && (specialchar >0))
            return true ;
         else
            return false;
        
    }
}