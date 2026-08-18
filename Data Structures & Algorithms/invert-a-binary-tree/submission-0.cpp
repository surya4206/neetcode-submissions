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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr)
            return root;
        if(root->left == nullptr && root->right == nullptr) 
            return root;
        TreeNode *tmp1 = invertTree(root->right);
        TreeNode *tmp2 = invertTree(root->left);
        root->left = tmp1;
        root->right = tmp2;
        return root;
    }
};
