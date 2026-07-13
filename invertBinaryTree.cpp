class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL)
            return NULL;

        TreeNode* n1 = root->left;

        root->left = root->right;
        root->right = n1;

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
