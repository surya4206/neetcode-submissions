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
    TreeNode* inorder(TreeNode* root, const int k, int& cnt) {
        if(!root)
            return nullptr;
        TreeNode* node = inorder(root->left, k, cnt);
        if(node) return node;
        cnt++;
        if(cnt == k)
            return root;
        return inorder(root->right, k, cnt);
    }
    int kthSmallest(TreeNode* root, int k) {
        int cnt = 0;
        return inorder(root, k, cnt)->val;
    }
};
