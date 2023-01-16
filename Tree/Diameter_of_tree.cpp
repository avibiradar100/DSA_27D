// Time:O(n)
// Space:O(n)

//  int findDia(Node* root,int& ans){
        
//         if(!root)
//           return 0;
        
//         int ld=findDia(root->left,ans);
//         int rd=findDia(root->right,ans);
        
//         ans=max(ans,ld+rd+1);
        
//         return 1+max(ld,rd);
//     }
    
//     int diameter(Node* root) {
//         // Your code here
        
//        int ans=0;
//        findDia(root,ans);
//        return ans;
//     }