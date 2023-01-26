//Time:O(n)
//space:O(1)

// void MirrorOfTree(Node *root){

//     if(!root)
//       return;

//     MirrorOfTree(root->left);
//     MirrorOfTree(root->right);

//     Node *tmp=root->left;
//     root->left=root->right;
//     root->right=tmp;

// }


  