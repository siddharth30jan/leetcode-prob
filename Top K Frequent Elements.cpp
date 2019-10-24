class Solution {
public:
    vector<int> topKFrequent(vector<int>& V, int k) {
        if(V.empty())
            return {};
        unordered_map<int,int> Z;
        priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > H;
        for(int i=0;i<V.size();i++) Z[V[i]]++;
        
        for(auto it:Z){
            H.push(make_pair(it.second,it.first));
            if(H.size()>k){
                H.pop();
            }
        }
        
        vector<int> ans;
        while(!H.empty()){
            ans.push_back(H.top().second);
            H.pop();
        }
        return ans;
    }
};