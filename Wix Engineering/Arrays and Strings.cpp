class Solution {
public:
// 929. Unique Email Addresses
    int numUniqueEmails(vector<string>& emails) {
        int cnt = 0;
        unordered_set<string> unset;
        for(string email : emails) {
            int po = email.find('@');
            string str = "";
            for(int i = 0 ; i < po ; i ++) {
                if(email[i] == '.') continue;
                else if(email[i] == '+') break;
                else str += email[i];
            }
            
            for(int j = po ; j< email.size() ; j++ ) {
                str += email[j];
            }
            
            if(unset.count(str)) continue;
            unset.insert(str);
            cnt++;
        }
        
        return cnt;
    }
// 243. Shortest Word Distance    
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        int i1 = -1;
        int i2 = -1;
        int ans = INT_MAX;
        
        for(int i = 0 ; i < wordsDict.size(); i++) {
            if(wordsDict[i] == word1 ) i1 = i;
            if(wordsDict[i] == word2 ) i2 = i;
            
            if(i1 != -1 && i2 != -1) ans = min(ans,abs(i1-i2));
        }
        
        return ans;
    }
};

