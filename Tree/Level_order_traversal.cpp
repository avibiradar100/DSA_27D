// Time:o(n)
// Space:O(n)    
    
    // vector<int> levelOrder(Node* node)
    // {
    //   //Your code here
      
    //   queue<Node*> q;
    //   vector<int> lvlorder;
    //   q.push(node);
    //   q.push(NULL);
    //   while(!q.empty()){
          
    //       node=q.front();
    //       q.pop();
    //       if(!node){
    //           if(!q.empty())
    //             q.push(NULL);
    //       }
    //       else{
            
    //         lvlorder.push_back(node->data);
    //         if(node->left)
    //             q.push(node->left);
    //         if(node->right)
    //             q.push(node->right);
    //       }
    //   }
    //   return lvlorder;
    // }





// vector<int> levelOrder(Node* node)
//     {
//         vector<int> ans;
//         queue<Node*> q;
//         if(node)
//             q.push(node);
//         while(!q.empty()){
//             int size=q.size();
//             for(int i=0;i<size;i++){
//                 Node *tmp=q.front();
//                 q.pop();
//                 ans.push_back(tmp->data);
//                 if(tmp->left)
//                     q.push(tmp->left);
//                 if(tmp->right)
//                     q.push(tmp->right);
//             }
//         }
//      return ans;   
//     }
