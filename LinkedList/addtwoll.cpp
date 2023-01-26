// Add two numbers represented by linked lists

//  //fn to rerverse the linked list
//     Node* reverse(Node* head){
        
//         if(!head || !head->next)
//           return head;
         
//         Node* nnode=reverse(head->next);
        
//         head->next->next=head;
//         head->next=NULL;
        
//         return nnode;
//     }
    
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         first=reverse(first);
//         second=reverse(second);
        
//         Node* mergeHead=new Node(0),*tmp1=first,*tmp2=second,*tmp3=mergeHead;
        
//         int carry=0,sum=0;
        
//         while(tmp1 || tmp2){
            
//             sum+= tmp1? tmp1->data:0;
//             sum+= tmp2? tmp2->data:0;
            
//             sum+=carry;
            
//             carry=sum/10;
            
//             tmp3->next=new Node(sum%10);
            
//             if(tmp1)
//                 tmp1=tmp1->next;
//             if(tmp2)
//                 tmp2=tmp2->next;
//             tmp3=tmp3->next;
//             sum=0;
//         }
//         if(carry)
//           tmp3->next=new Node(1);
//         return reverse(mergeHead->next);
//     }