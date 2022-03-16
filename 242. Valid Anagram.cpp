// Runtime: 11 ms, faster than 65.07% of C++ online submissions for Valid Anagram.
// Memory Usage: 7.4 MB, less than 8.19% of C++ online submissions for Valid Anagram.

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s == t) return true;
        if(s.size() != t.size()) return false;
        
        unordered_map<char,int> unmap;
        
        for(int i =0; i<s.size(); i++)
        {
            unmap[s.at(i)]++;
            unmap[t.at(i)]--;
        }
        for(auto it : unmap)
        {
            if(it.second) return false;
        }
        
        return true;
        
        
    }
};