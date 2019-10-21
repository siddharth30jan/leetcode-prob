class Solution {
public:
    static bool f(int X,int Y){
        string x=to_string(X);
        string y=to_string(Y);
        return x+y>y+x;
    }
    string largestNumber(vector<int>& V) {
        if(V.empty())
            return "";
        sort(V.begin(),V.end(),f);
        string t="";
        for(int i=0;i<V.size();i++){
           t+=to_string(V[i]);            
        }
        if(t[0]=='0')
            return "0";
        return t;
    }
};