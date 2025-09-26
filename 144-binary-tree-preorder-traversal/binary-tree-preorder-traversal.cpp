class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preorder(root, result);
        return result;
    }

private:
    void preorder(TreeNode* node, vector<int>& res) {
        if (!node) return;
        res.push_back(node->val);       // root
        preorder(node->left, res);      // left
        preorder(node->right, res);     // right
    }
};