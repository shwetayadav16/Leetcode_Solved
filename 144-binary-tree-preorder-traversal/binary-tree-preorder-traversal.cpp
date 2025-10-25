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
    vector<int> preorderTraversal(TreeNode*root) {
        vector<int> ans;
    stack<TreeNode*> st;
    TreeNode* curr = root;

    while (curr != NULL || !st.empty()) {
        while (curr != NULL) {
            ans.push_back(curr->val);  // Visit the node
            st.push(curr);             // Store it for backtracking
            curr = curr->left;         // Go to left child
        }
        curr = st.top();
        st.pop();
        curr = curr->right;            // Move to right subtree
    }

    return ans;

    }
};