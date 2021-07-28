Node* BST(Node* root, int x){
    if(root == NULL)return new Node(x);
    else if(root->data > x)root->left = BST(root->left, x);
    else if(root->data < x)root->right = BST(root->right, x);
    return root;
}

Node *constructTree (int post[], int size)
{
    Node* root = NULL;
    
    for(int i = size-1; i >= 0; i--)
        root = BST(root, post[i]);
        
    return root;
//code here
}