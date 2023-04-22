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
    int widthOfBinaryTree(TreeNode* root) {
     queue<pair<TreeNode*,long long int>> q;
     q.push({root,0});
     int res=1;
     while(!q.empty()){
           int cnt = q.size();
            int s = q.front().second;
            int end = q.back().second;
            
            res = max(res,end-s + 1);
            for(int i=0;i<cnt;i++){
                pair<TreeNode*,int> t = q.front();
                int idx= t.second  - s;
                q.pop();
                if(t.first->left)
                    q.push({t.first->left,(long long)2 * idx + 1});
                if(t.first->right)
                    q.push({t.first->right,(long long)2 * idx + 2});
            }
     } 
     return res;  
    }
};