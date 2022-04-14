// Runtime: 43 ms, faster than 81.73% of C++ online submissions for Search in a Binary Search Tree.
// Memory Usage: 35.1 MB, less than 24.22% of C++ online submissions for Search in a Binary Search Tree.

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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr) return root;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            int len = q.size();
            for(int i = 0 ; i < len ; i++) {
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->val == val) return temp;
                if(temp->left != nullptr) q.push(temp->left);
                if(temp->right != nullptr) q.push(temp->right);
            }
        }
        
        return nullptr;
    }
};