void inorder(Node* root, vector<int> &res){
        if(root == NULL)return;
        inorder(root->left, res);
        res.push_back(root->data);
        inorder(root->right, res);
    }
    
    int kthLargest(Node *root, int K)
    {
        vector<int> res;
        inorder(root, res);
        
        int n = res.size()-K;
        
        return res[n];
        //Your code here
    }