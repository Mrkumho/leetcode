//Your interview score of 5.76/10 beats 54% of all users.
//Time Spent: 42 minutes 51 seconds
//Time Allotted: 1 hour

class Solution {
public:
    //121. Best Time to Buy and Sell Stock
    int maxProfit(vector<int>& prices) {
        int minVal = prices[0], ans = 0;
        
        for(int i = 1; i<prices.size(); i++)
        {
            minVal = min(minVal,prices[i]);
            ans = max(ans,prices[i] - minVal);
        }
        
        return ans;
    }

    //238. Product of Array Except Self
    vector<int> productExceptSelf(vector<int>& nums) {
        unordered_map<int,int> unmap;
        vector<int> ans;
        for(int x : nums)
        {
            unmap[x]++;
        }
        
        for(int i = 0; i <nums.size(); i++)
        {   
            unmap[nums[i]]--;
            int temp = cal(unmap);
            ans.push_back(temp);
            unmap[nums[i]]++;
        }
        
        return ans;
    }
    
    int cal(unordered_map<int,int> unmap)
    {
        int res = 1;
        for(auto x : unmap)
        {      
            res *= pow(x.first,x.second);   
        }
        
        return res;
    }
};