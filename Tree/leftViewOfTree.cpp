// Time: O(n)
// Space:O(n)

// void leftView(Node* root,vector<int>& ans,int lvl){
    
//     if(!root)
//       return;
    
//     if(ans.size() <= lvl)
//        ans.push_back(root->data);
//     leftView(root->left,ans,lvl+1);
//     leftView(root->right,ans,lvl+1);
// }
// vector<int> leftView(Node *root)
// {
//    // Your code here
//    vector<int> ans;
//    vector<bool> lvl;
//    leftView(root,ans,0);
//    return ans;
// }