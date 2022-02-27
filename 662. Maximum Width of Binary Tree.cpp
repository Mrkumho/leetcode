// Runtime: 8 ms, faster than 85.32% of C++ online submissions for Maximum Width of Binary Tree.
// Memory Usage: 17.4 MB, less than 48.00% of C++ online submissions for Maximum Width of Binary Tree.

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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        
        int res = 1;
        
        while(!q.empty())
        {
            int len = q.size();
            int start = q.front().second;
            int end = q.back().second;
            res = max(res,end - start + 1);
            
            for(int i = 0; i< len; i++)
            {
                pair<TreeNode*,int> temp = q.front();
                int index = temp.second - start;
                q.pop();
                
                if(temp.first->left != nullptr) q.push({temp.first->left,(long long)2*index +1});
                if(temp.first->right != nullptr) q.push({temp.first->right,(long long)2*index +2});
            }
        }
        
        return res;
    }
};