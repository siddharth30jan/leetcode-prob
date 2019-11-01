class Solution {
public:
    vector<int> intersect(vector<int>& V1, vector<int>& V2) {
        unordered_map<int,int> V;
        vector<int> res;
        if(V1.size()>=V2.size()){
              for(auto i:V1)
            V[i]++;
            
        for(auto i:V2){
            
    
            if(V[i]){
                V[i]--;
                cout<<i<<endl;
                 res.push_back(i);
            }
               
        }
            
        }else{
             for(auto i:V2)
            V[i]++;
            
        for(auto i:V1){
            if(V[i]){
                V[i]--;
                 res.push_back(i);
            }
               
        }
        }
        return res;
      
    }
};