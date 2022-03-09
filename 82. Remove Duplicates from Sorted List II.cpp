// Runtime: 12 ms, faster than 47.39% of C++ online submissions for Remove Duplicates from Sorted List II.
// Memory Usage: 11.1 MB, less than 59.49% of C++ online submissions for Remove Duplicates from Sorted List II.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 *//
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* sentinel = new ListNode(-1,head);
        
        ListNode* prev  = sentinel;
        
        while(head != nullptr)
        {
            if(head->next != nullptr && head->val == head->next->val)
            {
                while(head->next != nullptr && head->val == head->next->val)
                {
                    head = head->next;
                }
                prev->next = head->next;
            }
            else
            {
                prev = head;
            }
            
            head = head->next;
        }
        
        return sentinel->next;
    }
};