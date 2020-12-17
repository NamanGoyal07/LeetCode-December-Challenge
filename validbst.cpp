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

typedef long long int ll;

class Solution {
public:
    
    bool is(TreeNode* root,ll mi, ll ma){
        if(root==nullptr) return true;
        
        if(root->val>=ma || root->val <=mi) return 0;
        return is(root->left,mi,root->val) && is(root->right,root->val,ma);
        
    }
    
    bool isValidBST(TreeNode* root) {
        return is(root,LONG_MIN,LONG_MAX);
        
    }
};
