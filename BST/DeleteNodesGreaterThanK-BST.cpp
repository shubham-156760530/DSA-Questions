Node* deleteNode(Node* root, int k)
    {
    	if (root == NULL) return NULL;
        root->right = deleteNode(root->right,k);
    	root->left = deleteNode(root->left,k);
    	if(root->data>=k)
    	{
    	    Node *temp =root->left;
    	    delete(root);
    	    return temp;
    	}
    	
    	return root;
    	
    }