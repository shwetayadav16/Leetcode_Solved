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
void solve(TreeNode*root,vector<int>&tree){
    if(root==NULL) return;
    solve(root->left,tree);
    tree.push_back(root->val);
    solve(root->right,tree);
}
    int kthSmallest(TreeNode* root, int k) {
        vector<int>tree;
        solve(root,tree);
        return tree[k-1];
    }
};