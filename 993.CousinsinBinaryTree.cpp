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
    int xparent,yparent,h1,h2;
    void depth(TreeNode* node ,int x,int y,int dep,int par_val){
        if(node==NULL){
            return;
        }
        if(node->val==x){
            xparent=par_val;
            h1=dep;
            return ;
        }
        if(node->val==y){
            yparent=par_val;
            h2=dep;
            return ;
        }
        depth(node->left, x, y, dep+1, node->val);
        depth(node->right, x, y, dep+1, node->val);
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        depth(root, x, y, 0, 0);
        if(h1==h2 && xparent!=yparent)
            return true;
        return false;
    }
};