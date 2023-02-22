class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue <TreeNode*> q;
        int level=0;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            vector<int> curr;
            for(int i=0;i<count;i++){
                TreeNode* node=q.front();
                q.pop();
                curr.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            if(level%2!=0)
                reverse(curr.begin(),curr.end());
            level++;
            ans.push_back(curr);
        }
        return ans;
    }
};