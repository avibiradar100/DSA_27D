// Time: O(nlogn)
// Space:O(logn)

// Node* findMid(Node* head){
        
//         Node* fast=head->next,*slow=head;
//         while(fast && fast->next){
            
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         return slow;
//     }
    
//     Node* merge(Node* left,Node* right){
            
//         Node* newList=new Node(0),*res=newList;
        
//         while(left && right){
            
//             if(left->data <= right->data){
                
//                 res->next=left;
//                 res=left;
//                 left=left->next;
//             }
//             else{
//                 res->next=right;
//                 res=right;
//                 right=right->next;
//             }
//         }
//         res->next=left?left:right;
        
//         return newList->next;
//     }
    
//     Node* mergeSort(Node* head) {
//         // your code here
        
//         //base case
//         if(!head || !head->next)
//           return head;
          
//         // split into two parts
        
//         Node* mid=findMid(head);
        
//         Node* left=head;
//         Node* right=mid->next;
//         mid->next=NULL;
        
//         //recursive call to sort both the half
//         left=mergeSort(left);
//         right=mergeSort(right);
        
//         //merge both left and right half
//         Node* result=merge(left,right);
        
//         return result;
//     }