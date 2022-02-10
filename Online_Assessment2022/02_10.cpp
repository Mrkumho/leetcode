//Your interview score of 4.89/10 beats 40% of all users.
//Time Spent: 33 minutes 37 seconds
//Time Allotted: 1 hour

class Solution {
public:
    //977. Squares of a Sorted Array
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int len = nums.size();
        
        for(int i = 0; i< len; i++)
        {
            ans.push_back(nums[i] * nums[i]);
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }

    //791. Custom Sort String
    string customSortString(string order, string s) {
        string ans;
        
        sort(s.begin(),s.end());
        
        for(char x : order)
        {
            int pos = 0;
            while(s.find(x,pos) != string::npos)
            {
                ans += x;
                pos = s.find(x,pos) + 1;
            }
        }
        
        for(char x : s)
        {
            if(order.find(x) == string::npos) ans +=x;
        }
        
        return ans;
    }
};