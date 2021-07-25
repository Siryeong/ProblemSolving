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
    int minDiffInBST(TreeNode* root) {
        queue<TreeNode * > q;
        vector<int> arr;
        
        q.push(root);
        while(!q.empty()){
            TreeNode * node = q.front();
            q.pop();
            arr.push_back(node->val);
            if(node->left != nullptr) q.push(node->left);
            if(node->right != nullptr) q.push(node->right);
        }
        sort(arr.begin(), arr.end());
        int min = 1000000;
        for(int i = 1; i < arr.size(); i++){
            min = min > abs(arr[i-1] - arr[i]) ? abs(arr[i-1]-arr[i]) : min;
        }
        return min;
    }
};