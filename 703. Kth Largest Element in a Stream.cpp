// Runtime: 28 ms, faster than 97.31% of C++ online submissions for Kth Largest Element in a Stream.
// Memory Usage: 19.8 MB, less than 63.09% of C++ online submissions for Kth Largest Element in a Stream.

class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int num : nums) minHeap.push(num);
    }
    
    int add(int val) {
        minHeap.push(val);
        
        while(minHeap.size()>k) {
            minHeap.pop();
        }
        
        return minHeap.top();
        
    }
private:
    priority_queue<int,vector<int>,greater<int>> minHeap;
    int k;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */