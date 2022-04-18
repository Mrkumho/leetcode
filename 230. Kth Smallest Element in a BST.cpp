// Runtime: 16 ms, faster than 90.27% of C++ online submissions for Kth Smallest Element in a BST.
// Memory Usage: 24.1 MB, less than 60.91% of C++ online submissions for Kth Smallest Element in a BST.

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
    int kthSmallest(TreeNode* root, int k) {
        this->k = k;
        dp(root);
        return ans;
    }
    
    void dp(TreeNode* root) {
        if(root == nullptr) return ;
        
        dp(root->left);
        if(k != 0)k--,ans = root->val;
        dp(root->right);
        return ;
    }
private:
    int k;
    int ans;
};