// Runtime: 12 ms, faster than 78.41% of C++ online submissions for Linked List Cycle.
// Memory Usage: 10.5 MB, less than 13.56% of C++ online submissions for Linked List Cycle.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> unset;
        
        while(head != nullptr)
        {
            if(unset.count(head)) return true;
            unset.insert(head);
            head = head->next;
        }
        
        return false;
    }
};