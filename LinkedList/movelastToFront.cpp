
// Time:O(N)
// Space:O(1)

// void moveToFront(Node* head)
// {
//     if (!head || !head->next)
//         return;
    
//     Node *last=head,*secLast;

//     while (last->next) {
//         secLast = last;
//         last = last->next;
//     }
 
//     secLast->next = NULL;
//     last->next = head;
    
//     head= last;
// }