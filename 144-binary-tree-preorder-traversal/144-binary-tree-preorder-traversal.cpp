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
    void Postorder(TreeNode* root,vector<int> &a)
    {
        if(root==NULL) return;
        a.push_back(root->val);
        Postorder(root->left,a);
        Postorder(root->right,a);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> a;
        Postorder(root,a);
        return a;
    }
};