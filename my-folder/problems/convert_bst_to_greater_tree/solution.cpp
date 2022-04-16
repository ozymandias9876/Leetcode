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
 void func(TreeNode *root,int& total)
    {
        if(!root) return ;
        func(root->right,total);
        total+=root->val;
        root->val=total;
        func(root->left,total);
    }
    
    TreeNode* convertBST(TreeNode* root) 
    {
        int total=0;
        func(root,total);
        return root;    
    }

};