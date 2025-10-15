class Solution {
public:
    int HeightLeft(TreeNode* node) {
        int height = 0;
        while (node) {
            height++;
            node = node->left;
        }
        return height;
    }
    int HeightRight(TreeNode* node) {
        int height = 0;
        while (node) {
            height++;
            node = node->right;
        }
        return height;
    }
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        int lh = HeightLeft(root);
        int rh = HeightRight(root);

        if (lh == rh) {
            return (1 << lh) - 1; 
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};