class Solution {
public:
    TreeNode* invertTree(TreeNode* r) {
        if(r==NULL)
        return 0;
        swap(r->left,r->right);
            
        if(r->left!=NULL)
            invertTree(r->left);
        if(r->right!=NULL)
            invertTree(r->right);
        
        return r;
    }
};