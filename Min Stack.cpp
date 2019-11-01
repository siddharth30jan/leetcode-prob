class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int,int> > V;
    MinStack() {
        
    }
    
    void push(int x) {
        if(V.empty()){
            V.push(make_pair(x,x));
            return;
        }
        V.push(make_pair(x,min(x,V.top().second)));
    }
    
    void pop() {
        if(!V.empty())
        V.pop();
    }
    
    int top() {
        return V.top().first;
    }
    
    int getMin() {
        return V.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */