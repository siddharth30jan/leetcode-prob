class Solution {
public:
    string longestPalindrome(string s) {
          
        
        if(s.length()==0)
            return "";
     int len=-1;
        if(s.length()==1)
            return s;
        
            int start;
        for(int i=0;i<s.length()-1;i++){
            
            //even substr
            int x=i;
            int y=i+1;
            
            while(x>=0&&y<s.length()&&s[x]==s[y]){
                if(y-x+1>len){
                    len=y-x+1;
                    start=x;
                }
                x--;
                y++;
                
            }
            

            //odd substr
             x=i;
             y=i;
            while(x>=0&&y<s.length()&&s[x]==s[y]){
                if(y-x+1>len){
                    len=y-x+1;
                    start=x;
                }
                x--;
                y++;            
            }
           
            
        }
        
        return s.substr(start,len);
       
    }
};