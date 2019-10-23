class Solution {
public:
    void f(string S,vector<string> &V,int open,int close,int total){
        //cout<<close<<endl;
        if(close==total){
         
            V.push_back(S);
            return;
        }
        
        
        if(open<total){
            S+="(";
            f(S,V,open+1,close,total);
            S=S.substr(0,S.length()-1);
        }
        if(close<open){
            S+=")";
            f(S,V,open,close+1,total);
             S=S.substr(0,S.length()-1);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> V;
        if(n==0)
            return V;
        string S="";
        f(S,V,0,0,n);
       
        return V;
    }
};