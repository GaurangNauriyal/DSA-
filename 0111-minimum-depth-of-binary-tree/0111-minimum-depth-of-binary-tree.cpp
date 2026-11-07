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
    int minDepth(TreeNode* root) {
        int minimumDepth = 1;
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            for(int i=0,n=q.size();i<n;i++){
                TreeNode* p = q.front();
                q.pop();
                if(p->left==NULL && p->right==NULL) return minimumDepth;
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
            minimumDepth++;
        }
        return minimumDepth;
    }
};