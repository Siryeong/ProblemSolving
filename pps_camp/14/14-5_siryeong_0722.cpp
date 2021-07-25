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
    vector<double> sum;
    vector<int> cnt;
    
    void dfs(TreeNode * root, int d){
        if(sum.size() < d+1){
            sum.push_back(root->val);
            cnt.push_back(1);
        }else{
            sum[d] += root->val;
            cnt[d]++;
        }
        if(!root->left && !root->right) return;
        if(root->left) dfs(root->left, d+1);
        if(root->right) dfs(root->right, d+1);
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        dfs(root, 0);
        for(int i = 0; i < sum.size(); i++){
            sum[i] /= (double)cnt[i];
        }
        return sum;
    }
};