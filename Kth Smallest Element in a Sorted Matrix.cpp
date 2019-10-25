class Solution {
public:
    int kthSmallest(vector<vector<int>>& V, int k) {
        
        priority_queue< pair<int,pair<int,int> >,vector< pair<int,pair<int,int> >>,greater< pair<int,pair<int,int> >> > Q;
        for(int i=0;i<V[0].size();i++)
            Q.push(make_pair(V[0][i],make_pair(0,i)));
        for(int i=0;i<k-1;i++){
            pair<int,pair<int,int> > T=Q.top();
            Q.pop();
            if(T.second.first+1<V.size())
                Q.push(make_pair(V[T.second.first+1][T.second.second],make_pair(T.second.first+1,T.second.second)));
        }
                   return Q.top().first;
    }
};