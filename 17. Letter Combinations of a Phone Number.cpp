// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Letter Combinations of a Phone Number.
// Memory Usage: 6.6 MB, less than 60.00% of C++ online submissions for Letter Combinations of a Phone Number.

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0 ) return res;
        
        string combi = "";
        helper(digits,0,combi);
        
        return res;
    }
    
    void helper(string digits,int i,string combi) {
        if(i == digits.size()) {
            res.push_back(combi);
            return;
        }
        
        for(auto c : v[digits[i] - '0']) helper(digits,i + 1,combi + c);
            
        return;
    }

private:
    vector<string> v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> res;
};