class Solution {
public:
    int calculate(string S) {
        if(S.empty())
            return 0;
        stack<long long> V;
        char op='+';
        long long num=0;
        for(int i=0;i<S.length();i++){
            if(S[i]==' ') continue;
            if(isdigit(S[i])){
                int j=i;
                while(i+1<S.length()&&isdigit(S[i+1])) i++;
               num=stoi(S.substr(j,i-j+1));
            }else{
                
                if(op=='+'){
                     V.push(num);
                }else if(op=='-'){
                     V.push(-num);
                }else if(op=='*'){
                    long long temp=V.top();
                    V.pop();
                    V.push(temp*num);
                }else{
                      long long temp=V.top();
                    V.pop();
                    V.push(temp/num);
                }
                op=S[i];
            }
        }
         if(op=='+'){
                     V.push(num);
                }else if(op=='-'){
                     V.push(-num);
                }else if(op=='*'){
                    long long temp=V.top();
                    V.pop();
                    V.push(temp*num);
                }else{
                      long long temp=V.top();
                    V.pop();
                    V.push(temp/num);
                }
        int ans=0;

      
        while(!V.empty()){
            ans+=V.top();
            V.pop();
        }
        return ans;
    }
        
        
};