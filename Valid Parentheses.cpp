class Solution {
public:
    bool isValid(string S) {
        if(S.empty()) return true;
        stack<char> V;
        V.push(S[0]);
       for(int i=1;i<S.length();i++){
           if(S[i]=='('||S[i]=='{'||S[i]=='[')
               V.push(S[i]);
           else{
               if(V.empty()) return false;
               if(S[i]==')'&&V.top()!='(') return false;
               if(S[i]=='}'&&V.top()!='{') return false;
               if(S[i]==']'&&V.top()!='[') return false;
               V.pop();
           }
       }
        return V.empty();
    }
};