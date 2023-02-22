class Solution {
public:
    bool check(TreeNode* node,int val){
        if(node==NULL)
            return true;
        if(node->val!=val)
            return false;
        return check(node->left,val) && check(node->right,val);
    }
    bool isUnivalTree(TreeNode* root) {
        int value=root->val;
        return check(root,value);
    }
};