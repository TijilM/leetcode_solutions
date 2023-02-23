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
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void summer(TreeNode* node,int depth,int &sum,int h){
        if(node==NULL)
            return;
        depth+=1;
        if(h==depth)
            sum+=node->val;
        summer(node->left,depth,sum,h);
        summer(node->right,depth,sum,h);
    }
    int deepestLeavesSum(TreeNode* root) {
        int h=height(root);
        int sum=0;
        summer(root,0,sum,h);
        return sum;
    }
};
114. Flatten Binary Tree to Linked List