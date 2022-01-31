/*Runtime: 4 ms, faster than 79.38% of C++ online submissions for Group Shifted Strings.
Memory Usage: 7.9 MB, less than 74.96% of C++ online submissions for Group Shifted Strings.*/

class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> unmap;
        
        for(auto &x : strings) {
            string key = "";
            for(int i = 0; i< x.size(); i++)
            {
                key += (x.at(i) + 26 - x.at(0)) % 26 + 'a';
            }
            unmap[key].push_back(x);
        }
        
        for(auto &x : unmap)
        {
            ans.push_back(x.second);    
        }
        
        return ans;
    }
};