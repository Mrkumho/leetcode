// Runtime: 16 ms, faster than 80.86% of C++ online submissions for Trim a Binary Search Tree.
// Memory Usage: 23.9 MB, less than 44.36% of C++ online submissions for Trim a Binary Search Tree.

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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root == nullptr) return nullptr;
        
        if(root->val > high) return trimBST(root->left,low,high);
        if(root->val < low) return trimBST(root->right,low,high);
        
        root->left = trimBST(root->left,low,high);
        root->right = trimBST(root->right,low,high);
        
        return root;
        
    }
};