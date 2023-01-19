// Sample:

// Input: head = [1,2,3,4,5], k = 3
// Output: [3,2,1,4,5]

// Time: O(N)
// Space:O(N)

// ListNode* reverseKGroup(ListNode* head, int k) {
        
//         //base case
//         if(!head)
//           return head;

//         //reverse group of size k

//         int cnt=0;
//         ListNode *curr=head,*prev=NULL,*next;
//         while(cnt<k){

//             next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//             cnt++;
//         }

//         //counting how many nodes remain
//         ListNode* tmp=next;
//         cnt=0;
//         while(tmp && cnt<k){
//             cnt++;
//             tmp=tmp->next;
//         }

//         //checking if possible and call recursive reverse
//         if(cnt==k && next)
//           head->next=reverseKGroup(next,k);
        
//         else
//           head->next=next;

//         //returning head

//         return prev;

//     }