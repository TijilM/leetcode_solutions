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
public:33. Search in Rotated Sorted Array
    void summer(TreeNode* node,int low,int high,int &ans){
        if(node==NULL)
            return;
        if(node->val<=high && node->val>=low)
            ans+=node->val;
        summer(node->left,low,high,ans);
        summer(node->right,low,high,ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        summer(root,low,high,sum);
        return sum;
    }
};