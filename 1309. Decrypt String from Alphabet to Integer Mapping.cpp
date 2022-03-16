// Runtime: 6 ms, faster than 12.16% of C++ online submissions for Decrypt String from Alphabet to Integer Mapping.
// Memory Usage: 6.3 MB, less than 17.88% of C++ online submissions for Decrypt String from Alphabet to Integer Mapping.

class Solution {
public:
    string freqAlphabets(string s) {
        string ans ="";
        stack<char> st;
        
        for(int i = s.size() -1; i>= 0; i--){
            string temp = "";
            if(s.at(i) == '#')
            {
                temp +=s.at(i-2);
                temp +=s.at(i-1);
                int num = stoi(temp);
                st.push('a' -1 + num);
                i = i -2;
            }
            else
            {   
                temp = s.at(i);
                int num = stoi(temp);
                st.push('a' -1 + num);
            }
        }
        
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        
        return ans;
    }
};