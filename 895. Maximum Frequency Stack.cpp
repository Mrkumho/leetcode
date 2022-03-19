// Runtime: 188 ms, faster than 84.46% of C++ online submissions for Maximum Frequency Stack.
// Memory Usage: 79 MB, less than 96.49% of C++ online submissions for Maximum Frequency Stack.

class FreqStack {
public:
    FreqStack(): pos(0) {
        
    }
    
    void push(int val) {
        pq.emplace(freq[val]++,make_pair(pos++,val));
    }
    
    int pop() {
        auto temp = pq.top();
        pq.pop();
        freq[temp.second.second]--;
        return temp.second.second;
    }
    
private:
    priority_queue<pair<int,pair<int,int>>> pq;
    unordered_map<int,int> freq;
    int pos;
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */