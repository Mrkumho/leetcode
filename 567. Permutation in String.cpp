/*Runtime: 339 ms, faster than 9.15% of C++ online submissions for Permutation in String.
Memory Usage: 18.4 MB, less than 11.16% of C++ online submissions for Permutation in String.*/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s2.size() < s1.size()) return false;
        
        vector<int> s1Arr(26,0);
        
        for(char x : s1)
        {
            s1Arr[x - 'a']++;
        }
        
        for(int i = 0; i<= s2.size() - s1.size(); i++)
        {
            vector<int> s2Arr(26,0);
            for(int j = i; j< s1.size()+ i; j++)
            {
                s2Arr[s2.at(j) - 'a']++;
            }
            if(s1Arr == s2Arr) return true;
        }
        
        return false;
    }
};