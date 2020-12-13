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

    int maxdepth = -1;
    TreeNode* ans=nullptr;

    int postOrder(TreeNode* root, int depth){
        if(root==nullptr) return depth;

        int left = postOrder(root->left,depth+1);
        int right = postOrder(root->right,depth+1);

        if(left==right){
            maxdepth = max(maxdepth, left);
            if(maxdepth==left){
                ans=root;
            }
        }

        return max(left,right);

    }

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        postOrder(root,0);
        return ans;
    }


};
