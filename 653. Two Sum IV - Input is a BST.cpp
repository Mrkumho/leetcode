// Runtime: 66 ms, faster than 42.12% of C++ online submissions for Two Sum IV - Input is a BST.
// Memory Usage: 38.2 MB, less than 40.91% of C++ online submissions for Two Sum IV - Input is a BST.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        stack<TreeNode*> stk;
        unordered_set<int> unset;
        
        while(!stk.empty() or root)
        {
            while(root)
            {
                stk.push(root);
                root = root->left;
            }
            
            root = stk.top();
            stk.pop();
            
            if(unset.count(k-root->val)) return true;
            
            unset.insert(root->val);
            root = root->right;
            
        }
        
        return false;
    }
};