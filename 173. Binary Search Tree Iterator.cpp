/*Runtime: 35 ms, faster than 56.32% of C++ online submissions for Binary Search Tree Iterator.
Memory Usage: 24.1 MB, less than 86.48% of C++ online submissions for Binary Search Tree Iterator.*/

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
class BSTIterator {
private:
stack<TreeNode*> myStack;
void PushLeft(TreeNode* root)
{
    for(;root != nullptr ;myStack.push(root), root = root->left );
}
public:
    BSTIterator(TreeNode* root) {
        PushLeft(root);
    }
    
    int next() {
        TreeNode* cur = myStack.top();
        myStack.pop();
        PushLeft(cur->right);
        return cur->val;
    }
    
    bool hasNext() {
        return !myStack.empty();
    }
    
    
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */