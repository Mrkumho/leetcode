// Runtime: 12 ms, faster than 23.24% of C++ online submissions for Two City Scheduling.
// Memory Usage: 7.9 MB, less than 78.03% of C++ online submissions for Two City Scheduling.

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),[](const vector<int> &v1,const vector<int> &v2){
            return v1[1] - v1[0] < v2[1] - v2[0];
        });
        
        int total = 0;
        int n = costs.size() / 2;
        
        for(int i = 0 ; i < n; i++) total += costs[i][1] + costs[i+n][0];
        
        return total;
    }
};