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
    bool  val(TreeNode* root)
    {
        if(root->left==NULL)
            return root->val;
        else if(root->right==NULL)
            return root->val;
        int z=val(root->left);
        int y=val(root->right);
        if(root->val==2)
            return z|y;
        
            return z&y;
        
    }
    bool evaluateTree(TreeNode* root) {
        return val(root);
    }
};