// Runtime: 9 ms, faster than 25.24% of C++ online submissions for Partition Labels.
// Memory Usage: 6.5 MB, less than 96.62% of C++ online submissions for Partition Labels.

class Solution {
public:
    vector<int> partitionLabels(string s) {
        if(s.size() == 0 ) return {};
        
        vector<int> v(26,-1);
        int len = s.size();
        
        for(int i = 0 ; i< len ; i++) v[s.at(i) - 'a'] = i;
        
        int j = 0, anchor = 0;
        vector<int> ans;
        
        for(int i = 0; i< len ; i++){
            int lastPos = v[s.at(i) - 'a'];
            
            j = max(lastPos,j);
            
            if(i == j)
            {
                ans.push_back(j - anchor + 1);
                anchor = i + 1;
            }
            
        }
        return ans;
    }
};