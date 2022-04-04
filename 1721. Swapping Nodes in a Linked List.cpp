// Runtime: 1064 ms, faster than 22.05% of C++ online submissions for Swapping Nodes in a Linked List.
// Memory Usage: 199.5 MB, less than 5.02% of C++ online submissions for Swapping Nodes in a Linked List.

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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* cur = head;
        vector<ListNode*> v;
        
        while(cur != nullptr) {
            v.push_back(cur);
            cur = cur->next;
        }
        swap(v[k-1]->val,v[v.size()-k]->val);
        
        return head;
    }
};