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
    
    TreeNode* ans;
    TreeNode* d;
    TreeNode* prev=nullptr;
    
    void inorder(TreeNode* root){
        if(root==nullptr) return;
        inorder(root->left);
        d->right=new TreeNode(root->val);
        d->left=nullptr;
        d=d->right;
        inorder(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        if(root==nullptr) return root;
        ans=new TreeNode(-1);
        d=ans;
        inorder(root);
        return ans->right;
    }
};
