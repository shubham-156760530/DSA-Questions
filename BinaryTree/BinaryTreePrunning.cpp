bool deleteNode(TreeNode* root){
        if(root->left == NULL and root->right == NULL and root->val == 0)return true;
        return false;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        if(root == NULL)return NULL;
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        if(deleteNode(root))return NULL;
        return root;
    }