class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        string r,r2;
        for(int i=0;S[i]!='\0';i++)
        {
          if(S[i]>='a' && S[i]<='z')
            r=r+S[i];
          else if(!r.empty())
            r.pop_back();
        }
        for(int i=0;T[i]!='\0';i++)
        {
          if(T[i]>='a' && T[i]<='z')
            r2=r2+T[i];
          else if(!r2.empty())
            r2.pop_back();  
        }
        if(r.compare(r2)==0)
            return true;
        return false;
    
   }
};