// Runtime: 1335 ms, faster than 16.67% of C++ online submissions for 3Sum With Multiplicity.
// Memory Usage: 10.8 MB, less than 20.41% of C++ online submissions for 3Sum With Multiplicity.

class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,int> unmap;
        unsigned int ans = 0;
        int mod = 1e9 + 7;
        
        for(int i = 0 ; i < arr.size(); i++) {
            ans += unmap[target - arr[i]];
            ans %= mod;
            for(int j = 0 ; j < i; j++) {
                unmap[arr[i] + arr[j]]++;
            }
        }
        
        return ans;
    }
};