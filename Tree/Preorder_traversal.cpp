// App1: iterative

// vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> preorder;
//         stack<TreeNode*> stk;
//         if(root)
//             stk.push(root);
//         while(!stk.empty()){
//             root=stk.top();
//             stk.pop();
//             preorder.push_back(root->val);
//             if(root->right)
//                 stk.push(root->right);
//             if(root->left)
//                 stk.push(root->left);
//         }
//         return preorder;
//     }

// App2: Recursive

// void dfs(TreeNode *root,vector<int>&preorder){
//         if(!root)
//             return;
//         preorder.push_back(root->val);
//         dfs(root->left,preorder);
//         dfs(root->right,preorder);
//  }