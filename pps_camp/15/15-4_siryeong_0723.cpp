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
    int dfs(TreeNode * node, int d){
        if(!node) return d;
        int a = dfs(node->left, d+1);
        int b = dfs(node->right, d+1);
        return a > b ? a : b;
    }
    
    int maxDepth(TreeNode* root) {
        return dfs(root, 0);
    }
};