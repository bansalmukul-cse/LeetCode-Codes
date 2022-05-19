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
    queue<TreeNode*> elements;
    
    // get inorder traversal of tree
    void inorder(TreeNode *root){
        if(root==nullptr) return;
        inorder(root->left);
        elements.push(root);
        inorder(root->right);
    }
    
    // rearange the tree
    void rearrange(TreeNode *root){
        if(elements.empty()) return;
        root->right = elements.front();
        root->left = root->right->left = root->right->right = nullptr;
        elements.pop();
        rearrange(root->right);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        root = new TreeNode();
        rearrange(root);
        return root->right;
    }
};
