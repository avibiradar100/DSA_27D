//App 1: Iterative

// vector<int> inorderTraversal(TreeNode* root) {
        
//         vector<int> ans;
//         stack<TreeNode*> stk;
//         TreeNode* node=root;
//         while(1){

//             if(node){

//                 stk.push(node);
//                 node=node->left;
//             }
//             else
//             {
//                 if(stk.empty())
//                     break;
//                 node=stk.top();
//                 stk.pop();
//                 ans.push_back(node->val);
//                 node=node->right;
//             }
//         }
//         return ans;
//     }


//App2: recursive
// Time:O(n)
// Space:O(n)
// void inorder(TreeNode* root,vector<int>& ans){

//         if(!root)
//           return;
        
//         inorder(root->left,ans);
//         ans.push_back(root->val);
//         inorder(root->right,ans);
// }

// vector<int> inorderTraversal(TreeNode* root) {
    
//     vector<int> ans;
//     inorder(root,ans);
//     return ans;
// }

