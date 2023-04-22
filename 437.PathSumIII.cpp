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
    void dfs(int &ans,TreeNode* root,int target,vector<int> &curr){
        if(root==NULL)
            return;
        curr.push_back(root->val);
        dfs(ans,root->left,target,curr);
        dfs(ans,root->right,target,curr);
        long sum=0;
        for(int i=curr.size()-1;i>=0;i--){
            sum+=curr[i];
            if(sum==target)
                ans++; 
        }
        curr.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        int ans=0;
        vector<int> curr;
        dfs(ans,root,targetSum,curr);
        return ans;
    }
};