// Add 1 to a number represented as linked list


// Node* reverse(Node* &head){
//         if(head->next==NULL) return head;
        
//         Node* temp=reverse(head->next);
//         head->next->next=head;
//         head->next=NULL;
//         return temp;
        
//     }
    
//     Node* addOne(Node *head) 
//     {
//         head=reverse(head);
        
//         int sum=0;
//         int carry=1;
        
//         Node* curr=head,*prev;
//         while(curr){
            
//             sum=(curr->data+carry);
//             curr->data=sum%10;
//             carry=sum/10;
//             prev=curr;
//             curr=curr->next;
//         }
        
//         if(carry){
//             Node* newNode=new Node(carry);
//             prev->next=newNode;
//         }
        
//         prev=head;
        
//         head=reverse(prev);
//         return head;
//     }
