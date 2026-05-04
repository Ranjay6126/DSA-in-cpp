int sumNodes(Node* root) {
    if (root == NULL) return 0;

    return root->data + sumNodes(root->left) + sumNodes(root->right);
}