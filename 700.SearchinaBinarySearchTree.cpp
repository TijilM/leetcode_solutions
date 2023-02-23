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
    TreeNode* finder(TreeNode* node,int val){
        if(node==NULL)
            return NULL;
        if(node->val==val)
            return node;
        else if(node->val>val)
            return finder(node->left,val);
        else
            return finder(node->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans;
        ans = finder(root,val);
        return ans;
    }
};