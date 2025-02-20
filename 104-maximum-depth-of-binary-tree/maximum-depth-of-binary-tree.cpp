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
int solve(TreeNode*root,int &depth){
    if(root==NULL) return 0;
    int left=solve(root->left,depth);
    int right=solve(root->right,depth);
    return depth=1+max(left,right);
}
    int maxDepth(TreeNode* root) {
        int depth=0;
        return solve(root,depth);
    }
};