// Your interview score of 5.22/10 beats 47% of all users.
// Time Spent: 33 minutes 56 seconds
// Time Allotted: 1 hour

//157. Read N Characters Given Read4
/**
 * The read4 API is defined in the parent class Reader4.
 *     int read4(char *buf4);
 */

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Number of characters to read
     * @return    The number of actual characters read
     */
    int read(char *buf, int n) {
        int byte = 0,totalByte = 0;
        
        while(true){
            byte = read4(buf + totalByte);
            totalByte += byte;
            if(byte < 4) break;
        }
        
        return totalByte > n ? n : totalByte; 
    }
};

//303. Range Sum Query - Immutable
class NumArray {
public:
    NumArray(vector<int>& nums) {
        for(int num : nums) v.push_back(num);
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        for(int i = left ; i <= right ; i++)
        {
            sum += v[i];
        }
        
        return sum;
    }
private:
    vector<int> v;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
