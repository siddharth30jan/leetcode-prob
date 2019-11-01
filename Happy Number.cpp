class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,bool> V;
        while(n!=1){
            int temp=0;
            while(n){
                temp+=(n%10)*(n%10);
                n/=10;
            }
           // cout<<temp<<endl;
            if(V[temp]) return false;
            V[temp]=true;
            n=temp;
        }
        return true;
    }
};