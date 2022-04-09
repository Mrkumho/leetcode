// Runtime: 31 ms, faster than 20.38% of C++ online submissions for Top K Frequent Elements.
// Memory Usage: 13.7 MB, less than 41.62% of C++ online submissions for Top K Frequent Elements.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> unmap;
        
        for(int num : nums) unmap[num]++;
        
        priority_queue<int,vector<int>,less<int>> pq;
        
        for(auto it : unmap) pq.push(it.second);
        
        vector<int> ans;
        
        while(!pq.empty() && ans.size() < k) {
            for(auto it : unmap) {
                if(it.second == pq.top()) {
                    ans.push_back(it.first);
                    unmap.erase(it.first);
                    pq.pop();
                    break;
                }
            }
        }
        
        return ans;
    }
};