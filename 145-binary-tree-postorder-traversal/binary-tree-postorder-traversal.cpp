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
    void post(TreeNode* node, vector<int> &arr)
    {
        if(node->left != nullptr)
        post(node->left, arr);
        if(node->right != nullptr)
        post(node->right, arr);
        if(node != nullptr)
        arr.push_back(node->val);
        return;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> arr;
        if(root != nullptr)
        post(root, arr);
        return arr;
    }
};