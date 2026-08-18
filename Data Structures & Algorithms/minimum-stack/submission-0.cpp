class MinStack {
public:
    stack<pair<int, int>> stk;
    MinStack() {
        
    }
    
    void push(int val) {
        if(stk.empty() || val < stk.top().second)
            stk.push(pair<int, int>{val, val});
        else
            stk.push(pair<int, int>{val, stk.top().second});
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top().first;
    }
    
    int getMin() {
        return stk.top().second;
    }
};
