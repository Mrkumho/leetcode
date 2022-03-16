// Runtime: 4 ms, faster than 61.80% of C++ online submissions for Find the Difference.
// Memory Usage: 6.7 MB, less than 24.01% of C++ online submissions for Find the Difference.

class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> vs(26,0);
        vector<int> vt(26,0);
        
        
        for(int i = 0; i< s.size(); i++)
        {
            vs[s.at(i) - 'a']++;
        }
        
        for(int i = 0; i<t.size(); i++)
        {
            vt[t.at(i) - 'a']++;
        }
        
        for(int i = 0; i < 26; i++)
        {
            if(vs[i] != vt[i]) return ('a' + i);
        }
        
        return 0;
    }
};