// Runtime: 10 ms, faster than 51.22% of C++ online submissions for Third Maximum Number.
// Memory Usage: 10.7 MB, less than 22.40% of C++ online submissions for Third Maximum Number

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> set;
        
        for(int num : nums) set.insert(num);
        
        int i = 0;
        int ret = 0;
        for(auto s : set){
            ret = s;
            if(i++ == set.size() -3) break;
        }
        return ret;
    }
};