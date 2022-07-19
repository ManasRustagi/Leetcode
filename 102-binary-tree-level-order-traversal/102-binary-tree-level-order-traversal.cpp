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
    int Height(TreeNode*root)
    {
        if(root==NULL) return 0;
        int l=Height(root->left);
        int r=Height(root->right);
        return max(l,r)+1;
    }
    void Level(TreeNode* root,int k,vector<int>& b)
    {
        if(root==NULL) return ;
        if(k==1)
        {
            b.push_back(root->val);
        }
        Level(root->left,k-1,b);
        Level(root->right,k-1,b);
    }
    void Transversal(TreeNode* root,vector<vector<int>>& a)
    {
        if(root==NULL) return;
        vector<int> b;
        int h=Height(root);
        for(int i=1;i<=h;i++)
        {
            Level(root,i,b);
            a.push_back(b);
            b.clear();
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> a;
        Transversal(root,a);
        return a;
    }
};