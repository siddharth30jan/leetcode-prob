//100%!!!!
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> V;
        if(n==0) return V;
        V.push_back({1});
        if(n==1) return V;
        n--;
        while(n--){
            vector<int> temp=V.back();
            vector<int> p;
            p.push_back(1);
            for(int i=0;i<temp.size()-1;i++){
                p.push_back(temp[i]+temp[i+1]);
            }
             p.push_back(1);
            V.push_back(p);
        }
        return V;
    }
};