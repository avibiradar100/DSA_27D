// App: Iteravtive

//  vector<int> postorderTraversal(TreeNode* root) {
        
//         vector<int> postorder;
//         stack<TreeNode*> stk1,stk2;
//         if(root)
//             stk1.push(root);
//         while(!stk1.empty()){
//             TreeNode *tmp=stk1.top();
//             stk1.pop();
//             stk2.push(tmp);
//             if(tmp->left)
//                 stk1.push(tmp->left);
//             if(tmp->right)
//                 stk1.push(tmp->right); 
//         }
//         while(!stk2.empty()){
//             postorder.push_back(stk2.top()->val);
//             stk2.pop();
//         }
//         return postorder;
//     }


// App2: Recursive

// void dfs(TreeNode *root,vector<int>&postorder){
//         if(!root)
//             return;
//         dfs(root->left,postorder);
//         dfs(root->right,postorder);
//         postorder.push_back(root->val);
//  }