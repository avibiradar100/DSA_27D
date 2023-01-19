// Sample:

// Input: head = [1,2,3,4,5], k = 3
// Output: [3,2,1,5,4]

// Time: O(N)
// Space:O(N)

// struct node *reverse (struct node *head, int k)
//     { 
//         // base case
//         if(!head)
//           return head;
        
//         // reverse k nodes
        
//         node* curr=head,*next,*prev=NULL;
//         int cnt=0;
        
//         while(curr && cnt<k){
            
//             next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//             cnt++;
//         }
        
//         // reverse recursively next nodes
        
//         if(next)
//           head->next=reverse(next,k);
          
//         // return  head pointer
//         return prev;
//     }