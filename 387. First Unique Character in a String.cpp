/*Runtime: 42 ms, faster than 61.54% of C++ online submissions for First Unique Character in a String.
Memory Usage: 10.7 MB, less than 70.34% of C++ online submissions for First Unique Character in a String.*/

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26,0);
        
        for(int c : s)
        {
            v[c - 'a']++;
        }
        
        int i = 0;
        for(int c : s)
        {
            if(v[c - 'a'] == 1) return i;
            i++;
        }
        
        return -1;
    }
};