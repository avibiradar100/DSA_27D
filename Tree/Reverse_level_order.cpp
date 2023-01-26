// Given a binary tree of size N, find its reverse level order traversal. ie- the traversal must begin from the last level.

// Example 1:

// Input :
//         1
//       /   \
//      3     2

// Output: 3 2 1

// Note: Here first we are inserting right into queue then left and finally we are reversing the output

//Time :O(n)
// Space: O(n)

// vector<int> reverseLevelOrder(Node *node)
// {
//     // code here
//       queue<Node*> q;
//       vector<int> lvlorder;
//       q.push(node);
//       q.push(NULL);
//       while(!q.empty()){
          
//           node=q.front();
//           q.pop();
//           if(!node){
//               if(!q.empty())
//                 q.push(NULL);
//           }
//           else{
            
//             lvlorder.push_back(node->data);
//             if(node->right)              
//                 q.push(node->right);
//             if(node->left)
//                 q.push(node->left);
//           }
//       }
//       reverse(lvlorder.begin(),lvlorder.end());
//       return lvlorder;
// }