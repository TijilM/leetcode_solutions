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
public:
    int i=0;
    vector<int> nodes;
    BSTIterator(TreeNode* root) {
        traversal(root,nodes);
    }
    
    int next() {
        return nodes[i++];
    }
    
    bool hasNext() {
        return (i!=nodes.size());
    }
    void traversal(TreeNode* root, vector <int>& nodes) {
        if (!root )
            return;
        traversal(root->left, nodes);
        nodes.push_back(root->val);
        traversal(root->right, nodes);    
    }    


};
 git config --global user.email "you@example.com"
  git config --global user.name "Your Name"
/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */