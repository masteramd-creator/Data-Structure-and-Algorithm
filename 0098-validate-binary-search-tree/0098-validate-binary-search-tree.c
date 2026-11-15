bool inorder(struct TreeNode* root, long long* prev) {
    if (root == NULL)
        return true;

    // Left subtree
    if (!inorder(root->left, prev))
        return false;

    // Current node
    if (root->val <= *prev)
        return false;

    *prev = root->val;

    // Right subtree
    return inorder(root->right, prev);
}

bool isValidBST(struct TreeNode* root) {
    long long prev = LLONG_MIN;
    return inorder(root, &prev);
}