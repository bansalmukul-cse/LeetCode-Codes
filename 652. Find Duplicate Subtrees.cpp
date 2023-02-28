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
    unordered_map<string , pair<TreeNode* , int>>m;
    string solve(TreeNode* root ){
   if(!root)
   return "$";
    
   if(!root->left && !root->right){
       string s= "";
       s = s + to_string(root->val);
       
       m[s] = {root ,m[s].second +1 };

       return s;
   }
  string s= "";
  s = s + to_string(root->val);
  s = s +"*" + solve(root->left);
  s = s +"*"+ solve(root->right);
  
m[s] = {root ,m[s].second +1 };
 
  return s;
   
   
}
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
         if(!root)
   return {NULL};
   vector<TreeNode*> v;
   solve(root ) ;
   for(auto it : m){
       if(it.second.second > 1)
       v.push_back(it.second.first);
   }
   
   return v;
    }
};
