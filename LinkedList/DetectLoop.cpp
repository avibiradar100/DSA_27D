//APP1: Take unordered set ans insert entire node into it and whenever we get it again that means loop present  

// Time:O(N)
// Space:O(N)

// bool detectLoop(Node* head)
//     {
//         // your code here
//         unordered_set<Node*> uset;
        
//         Node *tmp=head;
//         while(tmp){
            
//             if(uset.find(tmp)!=uset.end())
//               return true;
//             uset.insert(tmp);
//             tmp=tmp->next;
//         }
//         return false;
//     }

//APP2: Modifed data like out of range values and if visit again means loop present

// Time:O(N)
// Space:O(N)

//  bool detectLoop(Node* head)
//     {
//         // your code here
//         Node *tmp=head;
//         while(tmp){
            
//             if(tmp->data==-1)
//               return true;
//             tmp->data=-1;
//             tmp=tmp->next;
//         }
//         return false;
//     }

//App3:  Fast and slow pointer method

//Time:O(N)
// Space:O(N)

// bool detectLoop(Node* head)
//     {
//         // your code here
//         Node *slow=head,*fast=head;
//         while(fast && fast->next){
            
//             slow=slow->next;
//             fast=fast->next->next;
            
//             if(slow==fast)
//               return true;
//         }
//         return false;
//     }