class Solution {
public:
    vector<int> productExceptSelf(vector<int>& V) {
        if(V.size()==0||V.size()==1)
            return V;
        if(V.size()==2){
            swap(V[0],V[1]);
            return V;
        }
       
        vector<int> left;
        left.push_back(V[0]);
        
        for(int i=1;i<V.size();i++) left.push_back(V[i]*left[i-1]);
        int right=V.back();
        
       left[V.size()-1]=left[V.size()-2];
        for(int i=V.size()-2;i>0;i--){
           
            left[i]=right*left[i-1];
            right*=V[i];
        }
        left[0]=right;
        return left;
    }
};