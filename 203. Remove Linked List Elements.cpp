// Runtime: 16 ms, faster than 98.60% of C++ online submissions for Remove Linked List Elements.
// Memory Usage: 15.2 MB, less than 19.12% of C++ online submissions for Remove Linked List Elements.

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* sentinel = new ListNode(-1);
        sentinel->next = head;
        
        ListNode *prev = sentinel, *curr = head, *toDelete = nullptr;
        while(curr)
        {
            if(curr->val == val)
            {
                prev->next = curr->next;
                toDelete = curr;
            }
            else prev = curr;
            
            curr = curr->next;
            
            if(toDelete != nullptr)
            {
                delete toDelete;
                toDelete = nullptr;
            }
        }
        
        return sentinel->next;
    }
};