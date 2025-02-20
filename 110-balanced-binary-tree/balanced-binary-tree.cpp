/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
       bool isbalanced = true;
    int Height(TreeNode* root){
        if(root == NULL) return 0;

        int lh = Height(root -> left);
        int rh = Height(root -> right);
        // check for current noe, is it balanced?
        if(isbalanced && abs(lh - rh) > 1){
            isbalanced = false; 
        } 
        return max(lh, rh) + 1;
    }
    bool isBalanced(TreeNode* root) {
        Height(root);  
       return isbalanced;
    }
};