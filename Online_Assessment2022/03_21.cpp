// Your interview score of 7.91/10 beats 83% of all users.
// Time Spent: 18 minutes 48 seconds
// Time Allotted: 1 hour

class Solution {
public:

    //1213. Intersection of Three Sorted Arrays
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        map<int,int> map;
        
        for(int num : arr1) map[num]++;
        for(int num : arr2) map[num]++;
        for(int num : arr3) map[num]++;
        
        vector<int> ans;
        
        for(auto iter : map)
            if(iter.second == 3)
                ans.push_back(iter.first);
        return ans;
    }

    //496. Next Greater Element I
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        
        for(int i = 0 ; i< nums1.size(); i++)
        {
            for(int j = 0; j< nums2.size(); j++)
            {
                if(nums1[i] == nums2[j])
                {
                    int temp = -1;
                    for(int k = j+1; k<nums2.size(); k++)
                    {
                        if(nums2[j] < nums2[k])
                        {
                            temp = nums2[k];
                            break;
                        }
                    }
                    ans.push_back(temp);
                }
            }
        }        
        return ans;        
    }
};

