
class Solution {
public:
    vector<int> order;
    void inorder(TreeNode* root){
        if(root == NULL)
            return;
        inorder(root->left);
        order.push_back(root->val);
        inorder(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        int mini=INT_MAX;
        for(int i=1;i<order.size();i++){
            mini=min(mini,order[i]-order[i-1]);
        }
        return mini;
    }
};