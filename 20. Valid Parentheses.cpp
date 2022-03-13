// Runtime: 2 ms, faster than 42.21% of C++ online submissions for Valid Parentheses.
// Memory Usage: 6.4 MB, less than 51.50% of C++ online submissions for Valid Parentheses.

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(char x : s){
            switch(x){
                case('('):
                case('{'):
                case('['):
                    st.push(x);
                    break;
                case(')'):
                    if(st.empty() or st.top() != '(') return false;
                    else st.pop();
                    break;
                case('}'):
                    if(st.empty() or st.top() != '{') return false;
                    else st.pop();
                    break;
                case(']'):
                    if(st.empty() or st.top() != '[') return false;
                    else st.pop();
                    break;
                default:
                    return false;
            }
        }
        return st.empty();
    }
};