// Runtime: 152 ms, faster than 91.52% of C++ online submissions for Monotonic Array.
// Memory Usage: 96.5 MB, less than 67.95% of C++ online submissions for Monotonic Array.

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int len = nums.size();
        
        if(len <= 2) return true;
        
        int temp = 0;
        for(int i = 0; i< len -1; i++)
        {
            if(nums[i] != nums[i+1])
            {
                temp = nums[i+1] - nums[i];
                break;
            }
        }
        
        if( temp > 0)
        {
            for(int i = 0; i< len -1; i++)
            {
                if(nums[i+1] - nums[i] < 0) return false;
            }
        }
        else if(temp < 0)
        {
            for(int i = 0; i< len -1; i++)
            {
                if(nums[i+1] - nums[i] > 0) return false;
            }
        }
        
        return true;
    }
};

// Runtime: 213 ms, faster than 54.69% of C++ online submissions for Monotonic Array.
// Memory Usage: 96.3 MB, less than 99.02% of C++ online submissions for Monotonic Array.

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        return increasing(nums) or decreasing(nums);
    }
    
    bool increasing(vector<int>& nums){
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i+1] < nums[i]) return false;
        }
        return true;
    }
    
    bool decreasing(vector<int>& nums){
        for(int i = 0; i< nums.size() -1; i++){
            if(nums[i+1] > nums[i]) return false;
        }
        return true;
    }
};

// Runtime: 195 ms, faster than 70.71% of C++ online submissions for Monotonic Array.
// Memory Usage: 96.3 MB, less than 99.02% of C++ online submissions for Monotonic Array.

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true, decreasing = true;
        
        for(int i = 0; i< nums.size()-1; i++){
            if(nums[i+1] > nums[i]) decreasing = false;
            if(nums[i+1] < nums[i]) increasing = false;
        }
        
        return increasing or decreasing;        
    }
};