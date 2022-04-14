// 929. Unique Email Addresses

class Solution {
public:
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
};