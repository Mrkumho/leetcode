// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Implement Queue using Stacks.
// Memory Usage: 7 MB, less than 52.55% of C++ online submissions for Implement Queue using Stacks.

class MyQueue {
private:
    stack<int> st1;
    stack<int> st2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        
        int ret = st2.top();
        st2.pop();
        
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return ret;
        
    }
    
    int peek() {
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        
        int ret = st2.top();        
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return ret;
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */