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
    //we havve to make apiar in which first is parent node andf other is level
    //parent must not be same and height must be same
    void  parentAndHeight(TreeNode* root,int x,int parent, int height, pair<int, int> &p){
        if(!root) return;
         if(root->val == x) {
            p = make_pair(parent, height);
            return;
        }
        parentAndHeight(root->left,x,root->val, height+1,p);
        parentAndHeight(root->right,x,root->val, height+1,p);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        
          pair<int, int> px, py;
        parentAndHeight(root, x, 0, 0, px);
        parentAndHeight(root, y, 0, 0, py);
        return px.first != py.first && px.second == py.second;
    }
};
