class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& V) {
        
         vector<vector<int> > Z;
        if(V.size()<=2)
            return Z;
      sort(V.begin(),V.end());
        for(int i=0;i<V.size()-1;i++){
            if(i>0&&V[i]==V[i-1])
                continue;
           int l=i+1;
            int r=V.size()-1;
            while(l<r){
                if(V[i]+V[l]+V[r]==0){
                     Z.push_back({V[i],V[l],V[r]});
                   
                while(l<r&&V[l]==V[l+1]) l++;
                while(l<r&&V[r]==V[r-1]) r--;
                     l++;
                    r--;
                }else  if(V[i]+V[l]+V[r]<0) l++;
                  else r--;
                
               
        }
        }
        return Z;
       
    }
};