class MinStack {
public:
     stack<pair<int,int>> s;
    
    /** initialize your data structure here. */
    MinStack() {
        stack<pair<int,int>> ();
    }
    
    void push(int val) {
       if(s.size()==0)
           s.push({val,val});
        else
            s.push({val,min(val,s.top().second)});
    }
    
    void pop() {
       if(s.size()>0)
           s.pop();
    }
    
    int top() {
         return s.top().first;
        
    }
    
    int getMin() {
        
      return  s.top().second; 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
