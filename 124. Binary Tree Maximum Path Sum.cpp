class Solution {
private:
    int traverse(TreeNode* root, int& maxSum)
    {
        if(!root) return 0;
        int lMax = max(0, traverse(root->left, maxSum));
        int rMax = max(0, traverse(root->right, maxSum));
        maxSum = max(maxSum, lMax+rMax+root->val);
        return max(lMax, rMax)+root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        traverse(root, maxSum);
        return maxSum;
    }
};
