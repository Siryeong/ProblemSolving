/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void dfs(Node * root, int &d, int i){
        if(root==nullptr) return;
        if(root->children.size()==0){
            if(d < i) d = i;
        }
        else{
            for(int k = 0; k < root->children.size(); k++)
                dfs(root->children[k], d, i+1);
        }
    }
    
    
    int maxDepth(Node* root) {
        int d=0;
        dfs(root, d, 1);
        return d;
    }
};