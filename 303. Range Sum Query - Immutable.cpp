
// Runtime: 363 ms, faster than 15.36% of C++ online submissions for Range Sum Query - Immutable.
// Memory Usage: 17.2 MB, less than 7.36% of C++ online submissions for Range Sum Query - Immutable.

class NumArray {
private:
    vector<int> arr;
public:
    NumArray(vector<int>& nums) {
        arr.clear();
        
        for(int num : nums){
            arr.push_back(num);
        }
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        
        for(int i = left; i <= right; i++){
            sum += arr[i];
        }
        
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */