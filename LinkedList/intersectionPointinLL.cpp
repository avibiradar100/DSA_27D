// Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other

// ////Function to find intersection point in Y shaped Linked Lists.
// int intersectPoint(Node* head1, Node* head2)
// {
//     // Your Code Here
//     Node *a=head1,*b=head2;
    
//     while(a!=b){
        
//         a=a?a->next:head2;
//         b=b?b->next:head1;
//     }
//     return a->data;
// }