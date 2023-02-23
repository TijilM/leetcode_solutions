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
    // void inserter(TreeNode* root, TreeNode* node ){
    //     if(root->val<node->val && root->right==NULL){
    //         root->right=node;
    //         return;
    //     }
    //     else if(root->val>node->val && root->left==NULL){
    //         root->left=node;
    //         return;
    //     }
    //     if(root->val<node->val && root->right!=NULL)
    //         inserter(root->right,node);
    //     else if(root->val>node->val && root->left!=NULL)
    //         inserter(root->left,node);
        
    // }
    // TreeNode* insertIntoBST(TreeNode* root, int val) {
    //     TreeNode* node=new TreeNode(val);
    //     inserter(root,node);
    //     return root;
    // }
    //more efficient code as follows
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL)
            return new TreeNode(val);
        
        if(root->val > val){
            root->left = insertIntoBST(root->left , val);
        }
        
        else
            root->right = insertIntoBST(root->right , val);
        
        return root;
    }
};
