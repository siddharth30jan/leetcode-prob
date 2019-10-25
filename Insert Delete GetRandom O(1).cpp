class RandomizedSet {
public:
    /** Initialize your data structure here. */
    vector<int> V;
    unordered_map<int,int> Z;    
    RandomizedSet() {
        srand(time(NULL));
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(Z.find(val)!=Z.end())
            return false;
        V.push_back(val);
        Z[val]=V.size()-1;
        return true;        
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(Z.find(val)!=Z.end()){
            int index=Z[val];
             Z.erase(val);
            
            //Important!!
            if(index!=V.size()-1){
                swap(V[index],V[V.size()-1]);
                 Z[V[index]]=index; //THIS IS THE CRUX
            }
            
            V.pop_back();
            
          
           
            return true;
        }
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
            return V[rand() % V.size()];
       
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */