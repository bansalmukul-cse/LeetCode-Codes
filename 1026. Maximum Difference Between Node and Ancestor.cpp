class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        int res = 0, mx = INT_MIN, mn = INT_MAX;
        helper(root, mx, mn, res);
        return res;
    }
    void helper(TreeNode* node, int mx, int mn, int& res) {
        if (!node) return;
        if (mx != INT_MIN) res = max(res, abs(mx - node->val));
        if (mn != INT_MAX) res = max(res, abs(node->val - mn));
        mx = max(mx, node->val);
        mn = min(mn, node->val);
        helper(node->left, mx, mn, res);
        helper(node->right, mx, mn, res);
    }
};
