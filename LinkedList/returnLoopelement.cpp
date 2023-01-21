// Time: O(N)
// Space:O(1)

// int findFirstNode(Node* head)
//     {
//         // your code here
//         Node* slow=head,*fast=head;
//         while(fast && fast->next){
            
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast)
//               break;
//         }
//         if(!fast || !fast->next)
//           return -1;
        
//         slow=head;
//         while(slow!=fast){
            
//             slow=slow->next;
//             fast=fast->next;
//         }
//         return slow->data;
//     }