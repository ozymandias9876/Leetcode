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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
            return root;
        if(root->val==val)
            return root;
        TreeNode* lef=searchBST(root->left,val);
        TreeNode* rig=searchBST(root->right,val);
        if(lef!=NULL)
            return lef;
        else if(rig!=NULL)
            return rig;
        return rig;
        
        

    }
};