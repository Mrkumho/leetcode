
// Runtime: 8 ms, faster than 37.06% of C++ online submissions for Sum of Left Leaves.
// Memory Usage: 13.6 MB, less than 11.64% of C++ online submissions for Sum of Left Leaves.

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
private:
    int sum = 0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == nullptr) return 0;
        
        if(root->left != nullptr && root->left->left == nullptr && root->left->right ==nullptr){
            sum += root->left->val;
        }
        
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        
        return sum;
    }
};