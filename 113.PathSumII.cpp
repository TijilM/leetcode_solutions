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
    void func(vector<int> curr, TreeNode* root,int target,vector<vector<int>> &ans){
        if(!root)
            return;
        if(root->val==target && !root->right && !root->left){
            curr.push_back(root->val);
            ans.push_back(curr);
            curr.clear();
            return;
        }
        curr.push_back(root->val);
        func(curr,root->left,target-(root->val),ans);
        func(curr,root->right,target-(root->val),ans);
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> curr;
        vector<vector<int>> ans;
        func(curr,root,targetSum,ans);
        return ans;
    }
};