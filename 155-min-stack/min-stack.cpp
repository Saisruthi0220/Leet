class MinStack {
public:
    stack<int>st,minStack;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(minStack.empty()|| value<=minStack.top()){
            minStack.push(value);
        }
    }
    
    void pop() {
        if(st.empty()) return;
        if(st.top()==minStack.top()){
            minStack.pop();
        }
        st.pop();
    }
    
    int top() {
        if(!st.empty()){
            return st.top();
        }
        return -1;
    }
    
    int getMin() {
        if(!minStack.empty()){
            return minStack.top();
        }
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */