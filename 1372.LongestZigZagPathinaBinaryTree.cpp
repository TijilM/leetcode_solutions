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
    int dfs(TreeNode* root,bool left,int cnt){
        if(!root)
            return cnt;
        if(left) 
        return max(dfs(root->right, 0, cnt + 1), dfs(root->left, 1, 0));
        return max(dfs(root->left, 1, cnt + 1), dfs(root->right, 0, 0));
    }
    int longestZigZag(TreeNode* root) {
        return max(dfs(root->left,true,0),dfs(root->right,false,0));
    }
};