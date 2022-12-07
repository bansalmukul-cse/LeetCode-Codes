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
    int sum =0;
    void Inorder(TreeNode* root, int low, int high){
        if(root->left)
            Inorder(root->left, low, high);
        if(root->val>=low && root->val<=high)
            sum += root->val;
        if(root->right)
            Inorder(root->right, low, high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        Inorder(root, low, high);
        return sum;
    }
};
