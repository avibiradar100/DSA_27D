// APP1: Iterative
// Time:O(n)
// Space:O(1)

// Node* reverseList(struct Node *head)
//     {
//         Node* prev=NULL,*next,*curr=head;
        
//         while(curr){
            
//             next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//         }
//         return prev;
//     }


// //App2: Recursive
// Time:O(N)
// Space:O(N) // auxilary

//  struct Node* reverseList(struct Node *head)
//     {
//         // code here
//         // return head of reversed list
//         if(!head || !head->next)
//           return head;
        
//         Node* nnode=reverseList(head->next);
        
//         head->next->next=head;
//         head->next=NULL;
        
//         return nnode;
//     }