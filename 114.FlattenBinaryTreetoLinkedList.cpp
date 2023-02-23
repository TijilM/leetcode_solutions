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
    TreeNode* righty(TreeNode* root){
        while(root->right!=NULL)
            root=root->right;
        return root;
    }
    void flatten(TreeNode* root) {
        if(root==NULL)
            return;771. Jewels and Stones
        TreeNode* next;
        TreeNode* rightmost;
        while(root){
            if(root->left){
                rightmost=righty(root->left);
                next=root->right;
                root->right=root->left;
                root->left=NULL;
                rightmost->right=next;
            }
            root=root->right;
        }
    }
};