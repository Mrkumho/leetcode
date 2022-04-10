// Runtime: 7 ms, faster than 43.28% of C++ online submissions for Baseball Game.
// Memory Usage: 8.4 MB, less than 69.92% of C++ online submissions for Baseball Game.

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        
        for(int i = 0; i< ops.size(); i++) {
            if(ops.at(i) == "C") {
                v.pop_back();
            }
            else if(ops.at(i) == "D") {
                int num = v.back() * 2;
                v.push_back(num);
                
            }
            else if(ops.at(i) == "+") {
                int num = v.back() + v[v.size()-2];
                v.push_back(num);
            }
            else
            {
                string snum = ops.at(i);
                int num = stoi(snum);
                v.push_back(num);
            }
        }
        int sum = 0;
        for(int num : v) sum += num;
        
        return sum;
    }
};