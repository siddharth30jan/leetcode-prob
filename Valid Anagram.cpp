class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> V;
        for(auto i:s)
            V[i]++;
        for(auto i:t)
            V[i]--;
        for(char i='a';i<='z';i++){
            if(V[i]!=0)
                return false;
        }
        return true;
    }
};