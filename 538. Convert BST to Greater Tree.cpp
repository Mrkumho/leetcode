// Runtime: 36 ms, faster than 90.34% of C++ online submissions for Convert BST to Greater Tree.
// Memory Usage: 33.5 MB, less than 19.45% of C++ online submissions for Convert BST to Greater Tree.

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
    Solution() : sum(0){}
    TreeNode* convertBST(TreeNode* root) {
        if(root == nullptr) return nullptr;
        
        convertBST(root->right);
        sum += root->val;
        root->val = sum;
        convertBST(root->left);
        
        return root;
        
        
    }
private:
    int sum;
};