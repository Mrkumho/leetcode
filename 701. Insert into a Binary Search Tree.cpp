/*Runtime: 145 ms, faster than 46.93% of C++ online submissions for Insert into a Binary Search Tree.
Memory Usage: 57 MB, less than 50.19% of C++ online submissions for Insert into a Binary Search Tree.*/

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* cur = root;
        
        while(cur != nullptr)
        {
            if(cur->val > val)
            {
                if(cur->left == nullptr)
                {
                    cur->left = new TreeNode(val);
                    return root;
                }
                else
                {
                    cur = cur->left;
                }
            }
            else
            {
                if(cur->right == nullptr)
                {
                    cur->right = new TreeNode(val);
                    return root;
                }
                else
                {
                    cur = cur->right;
                }
            }
        }
        
        return new TreeNode(val);
    }
};