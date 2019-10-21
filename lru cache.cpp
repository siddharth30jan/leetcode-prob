class LRUCache {
public:
     list<pair<int,int> > V;
       map<int,list<pair<int,int> >::iterator > Z;
    int c;
    LRUCache(int capacity) {
       c=capacity;
    }
    
    int get(int key) {
        if(Z.find(key)!=Z.end()){
            auto it=Z[key];
            //cout<<(*it).first;
            
             V.erase(Z[key]);
                V.push_front(make_pair(key,(*it).second));
                Z[key]=V.begin();
            
            // cout<<(*it).second;
            return (*it).second;
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        if(V.size()<c){
            V.push_front(make_pair(key,value));
            Z[key]=V.begin();
        }else{
            
            if(Z.find(key)!=Z.end()){
                V.erase(Z[key]);
                V.push_front(make_pair(key,value));
                Z.erase(key);
                Z[key]=V.begin();
            }else{
                Z.erase((*V.rbegin()).first);
                 V.pop_back();
              
                 V.push_front(make_pair(key,value));
                Z[key]=V.begin();
            }
          
            
        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */