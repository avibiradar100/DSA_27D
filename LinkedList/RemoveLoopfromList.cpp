//   Time:O(N)
//   Space:O(1)

//   void removeLoop(Node* head)
//     {
//         // code here
//         // just remove the loop without losing any nodes
//         Node* fast=head,*slow=head;
//         while(fast && fast->next){
            
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast)
//               break;
//         }
        
//         if(fast==head){     // loop at first node  1->2->3->4->1 
            
//             while(slow->next!=fast)
//               slow=slow->next;
//             slow->next=NULL;
//         }
        
//         else if(slow==fast){     // other case
//             fast=head;
//             while(fast->next!=slow->next){
                
//                 fast=fast->next;
//                 slow=slow->next;
//             }
//             slow->next=NULL;
//         }
        
//     }