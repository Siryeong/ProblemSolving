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
    void dfs(TreeNode*root, int val, int d, int p, pair<int,int> &t){
        if(root->val == val){
            t.first = d;
            t.second = p;
            return;
        }
        if(root->left) dfs(root->left, val, d+1, root->val, t);
        if(root->right) dfs(root->right, val, d+1, root->val, t);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        pair<int,int> a, b;
        
        dfs(root, x, 0, 0, a);
        dfs(root, y, 0, 0, b);
        
        return (a.first == b.first) && (a.second != b.second);
    }
};