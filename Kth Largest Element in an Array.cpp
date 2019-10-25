class Solution {
public:
    int findKthLargest(vector<int>& V, int k) {
        priority_queue<int,vector<int>,greater<int> > Q;
        for(int i=0;i<k;i++) Q.push(V[i]);
        for(int i=k;i<V.size();i++){
          
            if(V[i]>Q.top()){
                 Q.pop();
                  Q.push(V[i]);
            }
               
        }
        
        while(!Q.size()==1) Q.pop();
        return Q.top();
        
    }
};