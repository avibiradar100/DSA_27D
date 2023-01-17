// Time: O(n)
// Space:O(n)


//  void rightView(Node* root,vector<int>& ans,int lvl){
        
//         if(!root)
//           return;
//         if(ans.size()<= lvl)
//           ans.push_back(root->data);
//         rightView(root->right,ans,lvl+1);
//         rightView(root->left,ans,lvl+1);
//     }
//     vector<int> rightView(Node *root)
//     {
//        // Your Code here
//        vector<int> ans;
//        rightView(root,ans,0);
//        return ans;
//     }