// Time:O(N)
// Space:O(1)

// //Function to remove duplicates from sorted linked list.
// Node *removeDuplicates(Node *head)
// {
//       // your code goes here
//       Node* st=head;
//       while(st->next){
          
//           if(st->data == st->next->data){
//               Node* tmp=st->next;
//               st->next=tmp->next;
//               delete tmp;
//           }
//           else
//             st=st->next;
//       }
//       return head;
// }