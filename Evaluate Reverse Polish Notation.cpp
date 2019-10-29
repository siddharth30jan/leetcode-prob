class Solution {
public:
    int evalRPN(vector<string>& Z) {
        if(Z.empty()) return 0;
        stack<long long> V;
        for(auto i:Z){
        if(i=="+"){
            long long phla=V.top();
            V.pop();
            long long dusra=V.top();
            V.pop();
            V.push(dusra+phla);
        }else if(i=="-"){
             long long phla=V.top();
            V.pop();
            long long dusra=V.top();
            V.pop();
            V.push(dusra-phla);
            
        }else if(i=="*"){
             long long phla=V.top();
            V.pop();
            long long dusra=V.top();
            V.pop();
            V.push(dusra*phla);
            
        }else if(i=="/"){
             long long phla=V.top();
            V.pop();
            long long dusra=V.top();
            V.pop();
            V.push(dusra/phla);
            
        }else{
            V.push(stoi(i));
        }
    }
    //cout<<V.size()<<endl;
    return V.top();
    }
};