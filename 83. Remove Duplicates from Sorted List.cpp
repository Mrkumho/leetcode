// Runtime: 14 ms, faster than 54.74% of C++ online submissions for Remove Duplicates from Sorted List.
// Memory Usage: 11.6 MB, less than 36.29% of C++ online submissions for Remove Duplicates from Sorted List.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* curr = head;

        while(curr && curr->next )
        {
            if(curr->val == curr->next->val)
            {
                curr->next = curr->next->next;
            }
            else curr = curr->next;                  
        }
        
        return head;
    }
};