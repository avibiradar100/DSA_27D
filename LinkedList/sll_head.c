#include<stdio.h>
#include<stdlib.h>

typedef struct node{

    int data;
    struct node *next;
}Node;

//fn to create new node
Node* createNode(int data){

    Node *a=(Node *) malloc(sizeof(Node));
    a->data=data;
    a->next=NULL;
    return a;
}

Node *st=NULL;  //head pointer

//fn to get last node address
Node* getlastNode(){

    Node *a=st;
    if(!a)
      return a;
    while(a->next){
        a=a->next;
    }
    return a;
}

//fn to display list
void display(){
    
    if(!st){
      printf("\n\nEmpty List");
      return;
    }

    Node *a=st;
    printf("\nList data:");
    while(a){
        printf("%4d",a->data);
        a=a->next;
    }
}

//fn to count nodes from  list
int count(){
    
    Node *a=st;
    int cnt=0;
    while(a){
        cnt++;
        a=a->next;
    }
    return cnt;
}


//fn to compute sum from  list
int sum(){
    
    Node *a=st;
    int sum=0;
    while(a){
        sum+=a->data;
        a=a->next;
    }
    return sum;
}

// fn to add new data at end
void addEnd(int data){

    Node *a=createNode(data);
    if(!st){
      st=a;
      return;
    }
    Node *b=getlastNode();
    b->next=a;
}

// fn to add new node at begin
void addBeg(int data){

    Node *a=createNode(data);
    a->next=st;
    st=a;
}

// fn to find max from the list
int findMax(){

    if(!st){
      printf("\n\nEmpty List");
      return -1;
    }

    Node *a=st;
    int max=a->data;
    while(a){

        if(a->data > max)
          max=a->data;
        a=a->next;
    }
    return max;
}

// fn to find min from the list
int findMin(){

    if(!st){
      printf("\n\nEmpty List");
      return -1;
    }

    Node *a=st;
    int min=a->data;
    while(a){

        if(a->data < min)
          min=a->data;
        a=a->next;
    }
    return min;
}

int main(){

    int d,opt;
    printf("\n Single Linked List");
    while(1){
      printf("\n\n\nMENU:\n1.add at end \n2.add at begin \n3.Display \n4.Count\n5.sum\n6.Maximum\n7.Minimum\n8.exit\noption:");
      scanf("%d",&opt);
      
      if(opt<1 || opt>7)
        break;
    
      switch(opt){
        case 1:
            printf("\nEnter data to add:");
            scanf("%d",&d);
            addEnd(d);
            display();
            break;
        case 2:
            printf("\nEnter data to add:");
            scanf("%d",&d);
            addBeg(d);
            display();
            break;
        case 3:
           display();
           break;
        case 4:
           printf("\n\nTotal Nodes:%d",count());
           break;
        case 5:
           printf("\n\nSum:%d",sum());
           break;
        case 6:
           printf("\n\nMaximum:%d",findMax());
           break;
        case 7:
           printf("\n\nMinimum:%d",findMin());
      }

    }
    return 0;
}

