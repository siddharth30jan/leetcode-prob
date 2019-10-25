class Solution {
public:
   
    vector<vector<string>> groupAnagrams(vector<string>& P) {
        vector<vector<string>> T;
        if(P.empty()) return T;
       
       
       unordered_map<string,vector<string> > V;
        for(int i=0;i<P.size();i++){
           string temp=P[i];
            sort(temp.begin(),temp.end());
            V[temp].push_back(P[i]);
        }
        for(auto i:V){
             vector<string> Z;
            for(auto j:i.second)
                Z.push_back(j);
            T.push_back(Z);
        }
        return T;
    }
};