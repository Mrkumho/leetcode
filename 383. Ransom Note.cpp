/*Runtime: 18 ms, faster than 66.58% of C++ online submissions for Ransom Note.
Memory Usage: 8.7 MB, less than 91.53% of C++ online submissions for Ransom Note.*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size() < ransomNote.size()) return false;
        vector<int> vm(26,0);
        vector<int> vr(26,0);
        for(char c : magazine)
        {
            vm[c -'a']++;
        }
        
        for(char c : ransomNote)
        {
            vr[c -'a']++;
        }
        
        for(int i = 0; i<26; i++ )
        {
            if(vr[i] > vm[i]) return false;
        }
        
        return true;
    }
};