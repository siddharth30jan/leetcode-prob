class Solution {
public:
    int firstUniqChar(string s) {
        pair<int,int> V[256];
        for(int i=0;i<s.length();i++){
            V[s[i]].first++;
            V[s[i]].second=i;
        }
        int ans=INT_MAX;
        for(char i='a';i<='z';i++){
            if(V[i].first==1){
                ans=min(ans,V[i].second);
            }
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};