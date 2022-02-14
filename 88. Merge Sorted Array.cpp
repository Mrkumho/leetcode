/*Runtime: 0 ms, faster than 100.00% of C++ online submissions for Merge Sorted Array.
Memory Usage: 9.1 MB, less than 29.81% of C++ online submissions for Merge Sorted Array.*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int i = m+n-1 ; i>=0; i--)
        {   
            if(n-1 < 0) break;
            
            if(m-1 >= 0 && nums1[m-1] >= nums2[n-1])
            {   
                nums1[i] = nums1[m-1];
                m--;
            }
            else
            {
                nums1[i] = nums2[n-1];
                n--;
            }
        }
    }
};