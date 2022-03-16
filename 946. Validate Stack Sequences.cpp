// Runtime: 8 ms, faster than 83.81% of C++ online submissions for Validate Stack Sequences.
// Memory Usage: 15.4 MB, less than 15.68% of C++ online submissions for Validate Stack Sequences.

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i = 0;
        
        for(int num : pushed){
            st.push(num);
            while(!st.empty() && st.top() == popped[i]){
                st.pop();
                i++;
            }
        }
        
        return st.empty();
    }
};