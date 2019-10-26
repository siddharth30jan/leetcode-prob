class Solution {
public:
    void f(string V[],string digits,int x,string S,vector<string> &ans){
        if(x==digits.length()){
            ans.push_back(S);
            return;
        }
        int num=int(digits[x])-'0';
        for(int i=0;i<V[num].length();i++){
            S+=V[num][i];
            f(V,digits,x+1,S,ans);
            S=S.substr(0,S.length()-1);
        }
    }
    vector<string> letterCombinations(string digits) {
        string V[]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        if(digits.empty()) return {};
        f(V,digits,0,"",ans);
        return ans;
    }
};