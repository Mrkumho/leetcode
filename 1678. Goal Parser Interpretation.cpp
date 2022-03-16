// Runtime: 2 ms, faster than 42.86% of C++ online submissions for Goal Parser Interpretation.
// Memory Usage: 5.9 MB, less than 97.96% of C++ online submissions for Goal Parser Interpretation.

class Solution {
public:
    string interpret(string command) {
        string ans = "";
        string temp = "";
        
        for(char ch : command){
            temp += ch;
            if(temp == "G") ans += "G", temp.clear();
            else if(temp == "()") ans += "o", temp.clear();
            else if(temp == "(al)") ans+= "al",temp.clear();
        }
        return ans;
    }
};