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
    void dfs(TreeNode* root, int &v, int i){
        if(root->left==nullptr && root->right==nullptr)
            v += ((i << 1) | root->val);
        if(root->left !=nullptr)
            dfs(root->left, v, (i << 1) | root->val);
        if(root->right != nullptr)
            dfs(root->right, v, (i << 1) | root->val);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        int v=0;
        dfs(root, v, 0);
        return v;
    }
};