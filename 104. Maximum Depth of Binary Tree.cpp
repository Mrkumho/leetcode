// Runtime: 12 ms, faster than 54.54% of C++ online submissions for Maximum Depth of Binary Tree.
// Memory Usage: 18.8 MB, less than 56.40% of C++ online submissions for Maximum Depth of Binary Tree.

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
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        
        return max( 1+ maxDepth(root->left), 1+ maxDepth(root->right));
    }
};