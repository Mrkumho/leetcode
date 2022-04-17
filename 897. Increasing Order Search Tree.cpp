// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Increasing Order Search Tree.
// Memory Usage: 8.3 MB, less than 6.25% of C++ online submissions for Increasing Order Search Tree.

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
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*> v;
        inOrderTraversal(root,v);
        TreeNode *ans = new TreeNode(-1), *cur = ans;
        for(auto node : v) {
            cur->right = new TreeNode(node->val);
            cur = cur->right;
        }
        
        return ans->right;
    }
    
    void inOrderTraversal(TreeNode* node,vector<TreeNode*>& v) {
        if(node == nullptr) return ;
        inOrderTraversal(node->left,v);
        v.push_back(node);
        inOrderTraversal(node->right,v);
        return ;
    }
};