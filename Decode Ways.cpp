class Solution {
public:
   
    int numDecodings(string S) {
        int dp[S.length()+1]={0};
        dp[0]=1;
        dp[1]= (S[0]>='1')?1:0;
        for(int i=2;i<=S.length();i++){
            int x=stoi(S.substr(i-1,1));
            int y=stoi(S.substr(i-2,2));
            if(x>=1)
                dp[i]+=dp[i-1];
            if(y>=10&&y<=26)
                dp[i]+=dp[i-2];
                
        }
        return dp[S.length()];
        
    }
};