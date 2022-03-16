// Runtime: 7 ms, faster than 10.90% of C++ online submissions for Merge Strings Alternately.
// Memory Usage: 6.4 MB, less than 55.06% of C++ online submissions for Merge Strings Alternately.

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p1 = 0;
        int p2 = 0;
        string ans = "";
        while(p1 < word1.size() && p2 < word2.size())
        {
            ans += word1[p1++];
            ans += word2[p2++];
        }
        
        return word1.size() > word2.size() ? ans += word1.substr(p1) : ans += word2.substr(p2);
    }
};