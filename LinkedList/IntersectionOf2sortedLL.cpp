// Intersection of two sorted Linked lists

// Node* findIntersection(Node* head1, Node* head2)
// {
//     // Your Code Here
    
//     Node* a=head1,*b=head2;
//     Node *newList=new Node(-1);
//     Node* c=newList;
    
//     while(a && b){
        
//         if(a->data==b->data){
            
//            c->next=new Node(a->data);
//            a=a->next;
//            b=b->next;
//            c=c->next;
//         }
//         else if(a->data < b->data)
//           a=a->next;
//         else
//           b=b->next;
//     }
//     return newList->next;
// }