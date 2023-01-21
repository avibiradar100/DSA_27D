    //App1:using extra space unordered set
    // Time:O(N)
    // Space:O(N)
    
    // //Function to remove duplicates from unsorted linked list.
    // Node * removeDuplicates( Node *head) 
    // {
    //     if(!head || !head->next)
    //       return head;
    //     unordered_set<int> uset;
    //     uset.insert(head->data);
    //     Node* st=head,*tmp;
    //     while(st->next){
            
    //         if(uset.find(st->next->data)!=uset.end()){
                
    //             tmp=st->next;
    //             st->next=tmp->next;
    //             delete tmp;
    //         }
    //         else{
    //            st=st->next;
    //            uset.insert(st->data);
    //         }
    //     }
    //     return head;
    // }