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
    //int this we have used concept like inorder
    //when we reach to leaf node we check the countr of odd number freq if it i sless tha equal to 1 then we can can consider that otherwise leave
    unordered_map<int,int>freq;
    int count =0;
     void dfs(TreeNode* root){
        if(root==NULL){
            return ;
        }
         freq[root->val]++;
         if(!root->left && !root->right){
              int odd = 0;
            for (auto it : freq)
            {
                if (it.second % 2 == 1) odd++;
            }
             
             if(odd<=1){
                 count++;
             }

         }
         dfs(root->left);
         dfs(root->right);
         freq[root->val]--;
        
    }
    int pseudoPalindromicPaths (TreeNode* root) {
       dfs(root);
       return count;
    }
};
