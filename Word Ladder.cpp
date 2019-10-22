class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& V) {
        unordered_set<string> Z(V.begin(),V.end());
        queue<pair<string,int> > Q;
        if(Z.find(endWord)==Z.end())
            return 0;
      
        
        Q.push(make_pair(beginWord,1));
        Z.erase(beginWord);
        while(!Q.empty()){
            pair<string,int> T=Q.front();
           //cout<<T.first<<" "<<T.second<<endl;
            Q.pop();
           
            if(T.first==endWord)
                return T.second;
            
            //check
           
           for(char i='a';i<='z';i++){
               
               for(int j=0;j<T.first.length();j++){
                    string test=T.first;
                   test[j]=i;
                   if(Z.find(test)!=Z.end()){
                       Q.push(make_pair(test,T.second+1));
                       Z.erase(test);
                   }
                       
               }
           }
        }
        return 0;
    }
};