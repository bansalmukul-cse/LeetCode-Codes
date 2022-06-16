class MyStack {
private:
    queue<int> into;
    
public:
    MyStack() {}
    
    void push(int x) {
        int i = 0;
        into.push(x);
        
        while(i < into.size() - 1){
            into.push(into.front());
            into.pop(); i++;
        }
    }
    
    int pop() {
        int top = into.front();
        into.pop();
        
        return top;
    }
    
    int top() {
        return into.front();
    }
    
    bool empty() {
        return into.empty();
    }
};
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
