class Solution {
public:
long sum=0;
    void solve(TreeNode* &root,long val){
        //base case
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            sum+= (val*2 + root->val);
            return;
        }
        solve(root->left,val*2+root->val);
        solve(root->right,val*2+root->val);
    }
    int sumRootToLeaf(TreeNode* root) {
        solve(root,0);
        return sum;
    }
};

