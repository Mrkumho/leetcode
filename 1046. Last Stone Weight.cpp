// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Last Stone Weight.
// Memory Usage: 7.6 MB, less than 78.96% of C++ online submissions for Last Stone Weight.

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        
        for(int weight : stones) pq.push(weight);
        
        while(pq.size() > 1) {  
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            pq.push(y - x);
        }
        
        return pq.top();
    }
};