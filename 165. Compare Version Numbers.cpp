// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Compare Version Numbers.
// Memory Usage: 6.1 MB, less than 95.20% of C++ online submissions for Compare Version Numbers.

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int len1 = version1.size();
        int len2 = version2.size();
        int i = 0, j = 0;
        
        while(i < len1 || j < len2)
        {   
            int num1 = 0;
            while(i< len1 && version1[i] != '.')
            {
                num1 = num1 * 10 + (version1[i++] - '0');
            }
            
            int num2 = 0;
            while(j< len2 && version2[j] != '.')
            {
                num2 = num2 * 10 + (version2[j++] - '0');
            }
            
            if(num1 > num2) return 1;
            if(num2 > num1) return -1;
            i++,j++;
        }
        
        return 0;
    }
};